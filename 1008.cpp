/**
其中要对m取模的步骤
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int n, m;
	vector <int> list;
	while (cin >> n >> m) {
		for (int i = 0; i < n; i++) {
			int a; cin >> a;
			list.push_back(a);
		}
		m = m % n;
		int right = n - m;
		for (int i = right; i < n; i++) {
			if (m == 0 && i == n - 1) {
				cout << list[i];
			}
			else {
				cout << list[i] << " ";
			}
		}

		for (int i = 0; i < right; i++) {
			if (i == right - 1) {
				cout << list[i];
			}
			else {
				cout << list[i] << " ";
			}
		}
	}
}
