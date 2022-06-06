#!/bin/bash

set -e

main() {
	if [ -z "$1" ] || [ -z "$2" ]; then
		echo "Usage: $0 <executable_file> <test_data_path>" 1>&2
		exit 1
	fi

	EXEC_FILE="${1}"
	TEST_DATA_FOLD="${2%/}"

	if [ ! -f "$EXEC_FILE" ]; then
		echo "Could not resolve test executable file." 1>&2
		exit 1
	fi

	if [ ! -d "$TEST_DATA_FOLD" ]; then
		echo "Could not resolve test data directory." 1>&2
		exit 1
	fi

	for FILE in $TEST_DATA_FOLD/input*.txt; do
		TEST_DATA_INDEX="$(echo "$FILE" | sed -Er "s|^.*/input([0-9]{2}).txt$|\1|")"
		test "$EXEC_FILE" "$TEST_DATA_FOLD" "$TEST_DATA_INDEX"
	done
}

test() {
	local EXEC_FILE="$1"
	local TEST_DATA_FOLD="$2"
	local TEST_DATA_INDEX="$3"

	TEST_INPUT_FILE="input${TEST_DATA_INDEX}.txt"
	TEST_OUTPUT_FILE="output${TEST_DATA_INDEX}.txt"
	TEST_OUTPUT_ACTUAL_FILE="output${TEST_DATA_INDEX}_actual.txt"

	if [ ! -f "$TEST_DATA_FOLD/$TEST_INPUT_FILE" ]; then
		echo "Could not resolve expected test data file: $TEST_DATA_FOLD/$TEST_INPUT_FILE" 1>&2
		exit 1
	fi

	if [ ! -f "$TEST_DATA_FOLD/$TEST_OUTPUT_FILE" ]; then
		echo "Could not resolve expected test data file: $TEST_DATA_FOLD/$TEST_OUTPUT_FILE" 1>&2
		exit 1
	fi

	echo 1>&2

	CMND="$EXEC_FILE < $TEST_DATA_FOLD/$TEST_INPUT_FILE > $TEST_DATA_FOLD/$TEST_OUTPUT_ACTUAL_FILE"
	echo "$CMND" 1>&2
	eval "$CMND"

	CMND="diff $TEST_DATA_FOLD/$TEST_OUTPUT_FILE $TEST_DATA_FOLD/$TEST_OUTPUT_ACTUAL_FILE"
	echo "$CMND" 1>&2
	COUT=$($CMND || true)

	echo -n "$TEST_DATA_INDEX : "
	[ -z "$COUT" ] && echo "OK" || echo "KO"
}

main "$@"
