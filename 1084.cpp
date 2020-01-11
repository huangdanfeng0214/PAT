
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

string charact(string s) {
	string ans;
	int l[s.length()];
	for (int i = 0; i < s.length(); i++) {
		l[i] = 1;
	} //初始化设为1 

	if (s.length() == 1) {
		ans = s + "1";
		//	cout<<"s:"<<s<<", ans:"<<ans<<endl; 
		return ans;
	}
	s.append("x"); //给string加一个末尾位，让它和其他的数都不一样。 结束判断的作用 
	for (int i = 1; i < s.length(); i++) {
		if (s[i] == s[i - 1]) {
			l[i] = l[i - 1] + 1;
			//	cout<<">>:"<<i<<" "<<l[i]<<endl;
		}
		else if (s[i] != s[i - 1]) {
			string tmp(1, s[i - 1]);
			ans += (tmp + to_string(l[i - 1])); //不相等，就结束前一位的计数，给前一个数赋值 
		}

	}
	//	cout<<"s:"<<s<<", ans:"<<ans<<endl;  
	return ans;
}

int main()
{
	int n;
	string a;
	cin >> a >> n;
	string b[n + 10];
	b[1] = a;
	for (int i = 2; i <= n; i++) {
		b[i] = charact(b[i - 1]);
		//	cout<<"i"<<i<<",b:"<<b[i]<<endl;  
	}
	cout << b[n] << endl;
}
