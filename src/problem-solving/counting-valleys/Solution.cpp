#include <iostream>
#include <vector>
#include <map>

using namespace std;

int countingValleys(int steps, string path) {
	fprintf(stderr, "%s\n", path.c_str());

	int prevLevel = 0;
	int currLevel = 0;

	int mountains = 0;
	int valleys = 0;

	for (const auto& c : path) {
		prevLevel = currLevel;

		if ('U' == c) {
			currLevel += 1;
		}
		else if ('D' == c) {
			currLevel -= 1;
		}

		// Count regions on entry, 
		// upon passing threshold (1, -1) 
		// and coming from certain position (0).

		if (prevLevel == 0) {
			if (currLevel == 1) {
				mountains += 1;
			}
			else if (currLevel == -1) {
				valleys += 1;
			}
		}

		// fprintf(stderr, "%c mountains: %d valleys: %d currLevel: %d\n", c, mountains, valleys, currLevel);
	}

	fprintf(stderr, "Mountains: %d Valleys: %d\n", mountains, valleys);

	return valleys;
}

void test(int steps, string path, int expected) {
	int result = countingValleys(steps, path);

	fprintf(stdout, "Got: %d Expected: %d\n", result, expected);
	fprintf(stdout, "%s\n", (result == expected ? "OK" : "KO"));
	fprintf(stdout, "\n");
}

int main(int argc, char** argv) {

	test(8, "DDUUUUDD", 1);

	test(8, "UDDDUDUU", 1);

    return 0;
}
