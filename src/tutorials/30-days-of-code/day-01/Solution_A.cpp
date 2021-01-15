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

	fscanf(stdin, "%d", &I);
	fscanf(stdin, "%lf", &D);
	for (int c; ((c = fgetc(stdin)) != '\n') && (c != EOF);) {}
	for (int c; ((c = fgetc(stdin)) != '\n') && (c != EOF);) { S.append(1, (char) c); }

	fprintf(stdout, "%d\n", i + I);
	fprintf(stdout, "%.1lf\n", d + D);
	fprintf(stdout, "%s%s\n", s.c_str(), S.c_str());

	return 0;
}
