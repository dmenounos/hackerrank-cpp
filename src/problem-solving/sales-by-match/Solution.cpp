#include <iostream>
#include <vector>
#include <map>

using namespace std;

int sockMerchant(int n, vector<int> ar) {
	map<int,int> groups;
	int pairs = 0;
	int total = 0;

	for (int e : ar) {
		auto countPair = groups.find(e);
		int count;

		if (countPair != groups.end()) {
			count = countPair->second;
			count += 1;
		} else {
			count = 1;
		}

		// fprintf(stderr, "e: %d count: %d\n", e, count);
		groups[e] = count;
		total += 1;

		if (count > 0 && count % 2 == 0) {
			// fprintf(stderr, "pair for e: %d\n", e);
			pairs += 1;
		}
	}

	cout << "Result { "
		<< " pairs: " << pairs << ", " 
		<< " total: " << total << ", "
		<< " leftovers: " << (total - 2 * pairs) << " }\n";

	return pairs;
}

void test(int n, vector<int> ar, int expected) {
	int result = sockMerchant(n, ar);

	fprintf(stdout, "Got: %d Expected: %d\n", result, expected);
	fprintf(stdout, "%s\n", (result == expected ? "OK" : "KO"));
	fprintf(stdout, "\n");
}

int main(int argc, char* argv[]) {

	test(7, { 1, 2, 1, 2, 1, 3, 2 }, 2);

	test(9, { 10, 20, 20, 10, 10, 30, 50, 10, 20 }, 3);

	return 0;
}
