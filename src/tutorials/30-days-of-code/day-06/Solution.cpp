#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	string str;
	
	cin >> n;

	for (int i = 0; i < n; i++) {	
		cin >> str;

		for (size_t j = 0; j < str.length(); j += 2) {
			cout << str.at(j);
		}

		cout << " ";

		for (size_t j = 1; j < str.length(); j += 2) {
			cout << str.at(j);
		}

		cout << "\n";
	}

	return 0;
}
