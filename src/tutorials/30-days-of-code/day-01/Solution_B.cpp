#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
	int i = 4;
	double d = 4.0;
	string s = "HackerRank ";

	int I;
	double D;
	string S;

	cin >> I;
	cin >> D;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	getline(cin, S);

	cout << i + I << "\n";
	cout << fixed << setprecision(1) << d + D << "\n";
	cout << s << S << "\n";

	return 0;
}
