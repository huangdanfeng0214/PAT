/**
ºÚµ•Ã‚
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
	int n;
	string a;
	set<string> s;
	set<int> ss;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		s.insert(a);
	}

	for (auto x : s) {
		for (auto y : s) {
			if (x != y) {
				string as = x + y;
				ss.insert(stoi(as));
			}
		}
	}
	int ans = 0;
	for (auto tmp : ss) {
		//	cout<<tmp<<" ";
		ans += tmp;
	}
	cout << ans;
}
