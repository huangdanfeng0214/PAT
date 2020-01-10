/**
// setĬ��������ģ� unordered_set�������
// mapĬ��������ģ� unordered_map�������
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

int friendnum(int a) {
	int ans = 0;
	while (a > 9) {
		ans += a % 10;
		a = a / 10;
	}
	ans += a;
	// cout<<ans<<" ";
	return ans;
}

int main()
{
	int n, m;
	cin >> n;
	set<int>s;
	for (int i = 0; i < n; i++) {
		cin >> m;
		s.insert(friendnum(m));
	}
	sort(s.begin(), s.end()); // setĬ��������ģ� unordered_set������� 
	cout << s.size() << endl;

	int flag = 0;
	for (auto x : s) {
		if (flag == 0) {
			cout << x;
		}
		else {
			cout << " " << x;
		}
		flag = 1;
	}


}
