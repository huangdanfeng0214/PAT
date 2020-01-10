/**
// set默认是有序的， unordered_set是无序的
// map默认是有序的， unordered_map是无序的
*/
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
	cin >> n;
	vector<int>v;
	for (int i = 0; i < n; i++) {
		cin >> m;
		v.push_back(m);
	}
	sort(v.begin(), v.end());

	int flag = 0;
	float ans = 0;
	for (auto x : v) {
		if (flag == 0) {
			ans += x;
		}
		else {
			ans = (ans + x) * 1.0 / 2;
		}
		flag = 1;
	}
	cout << floor(ans);

}
