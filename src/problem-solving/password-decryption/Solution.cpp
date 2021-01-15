#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'decryptPassword' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */
string decryptPassword(string s) {
	string res;
	size_t numIdx = 0;

	for (size_t i = s.length(); i > numIdx; i--) {
		char c = s[i - 1];

		if (c == '*') {
			// cout << "*\n";
			char c_a = s[i - 2];
			char c_b = s[i - 3];

			if (isalpha(c_a) && islower(c_a) && 
				isalpha(c_b) && isupper(c_b)) {
				res.insert(0, 1, c_b);
				res.insert(0, 1, c_a);
				i -= 2;
			}
		}
		else if (c == '0') {
			// cout << "digit " << c << "\n";
			res.insert(0, 1, s[numIdx]);
			numIdx += 1;
		}
		else {
			// cout << "default " << c << "\n";
			res.insert(0, 1, c);
		}
	}

	return res;
}

int main()
{
//	ofstream fout(getenv("OUTPUT_PATH"));
	ostream& fout = cout;

	string s;
	getline(cin, s);

	string result = decryptPassword(s);

	fout << result << "\n";

//	fout.close();

	 return 0;
}
