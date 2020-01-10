/**
傻瓜模拟相减的过程
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

string jian(int g0, int s0, int k0, int g1, int s1, int k1) {
	string ans;
	int g, s, k;
	if (k1 >= k0) {
		k = k1 - k0;
	}
	else {
		k = k1 - k0 + 29;
		s1--;
	}

	if (s1 >= s0) {
		s = s1 - s0;
	}
	else {
		s = s1 - s0 + 17;
		g1--;
	}

	if (g1 >= g0) {
		g = g1 - g0;
	}
	else {
		g = g1 - g0;
	}
	// cout<<g<<" "<<s<<" "<<k<<endl;
	ans.append(to_string(g)).append(".").append(to_string(s)).append(".").append(to_string(k));
	return ans;
}
int main()
{
	int s[3], k[3];
	long long int g[3];
	string p, a;
	cin >> p >> a;
	g[0] = stoi(p.substr(0, p.find(".")));
	s[0] = stoi(p.substr(p.find(".") + 1, p.find_last_of(".") - p.find(".") - 1));
	k[0] = stoi(p.substr(p.find_last_of(".") + 1, p.length() - p.find_last_of(".") - 1));

	g[1] = stoi(a.substr(0, a.find(".")));
	s[1] = stoi(a.substr(a.find(".") + 1, a.find_last_of(".") - a.find(".") - 1));
	k[1] = stoi(a.substr(a.find_last_of(".") + 1, a.length() - a.find_last_of(".") - 1));


	string ans = jian(g[0], s[0], k[0], g[1], s[1], k[1]);
	if (ans.npos != ans.find("-")) {
		ans = "-" + jian(g[1], s[1], k[1], g[0], s[0], k[0]);
	}

	cout << ans;
}
