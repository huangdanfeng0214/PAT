
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <algorithm>
#include <sstream>
#include <cctype>
#include <cmath>


using namespace std;



int main()
{

	int n, m;
	cin >> n >> m;
	int score[m];
	int ans[m];
	for (int i = 0; i < m; i++) {
		cin >> score[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> ans[i];
	}

	for (int i = 0; i < n; i++) {
		int res = 0;
		int a;
		for (int j = 0; j < m; j++) {
			cin >> a;
			if (a == ans[j]) {
				res += score[j];
			}
		}
		cout << res << endl;
	}
}
