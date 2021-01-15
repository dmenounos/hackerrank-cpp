#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, q;

    cin >> n >> q;
    //cout << "n: " << n << " q: " << q << "\n";

    int vs;
    int ve;
    vector<vector<int>> data;

    for (int r = 0; r < n; r++) {
        cin >> vs;
        //cout << "vs: " << vs;
        data.push_back(vector<int>());

        for (int c = 0; c < vs; c++) {
            cin >> ve;
            //cout << " ve: " << ve;
            data[r].push_back(ve);
        }

        //cout << "\n";
    }

    for (int h = 0; h < q; h++) {
		int i, j;

		cin >> i >> j;
		cout << data[i][j] << "\n";
	}

    return 0;
}
