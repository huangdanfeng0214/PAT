
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
	int n, m, a;
	cin >> n;
	int flag;
	string sa, sm;

	for (int i = 0; i < n; i++) {
		cin >> m; flag = 0;
		for (int j = 1; j < 10; j++) {
			a = m * m * j; sm = to_string(m);
			//cout<<m<<" "<<a<<endl; 
			sa = to_string(a);
			sa = sa.substr(sa.length() - sm.length());
			if (sa == sm) {
				cout << j << " " << a << endl;
				flag = 1;
				break;
			}
		}
		if (flag == 0) {
			cout << "No" << endl;
		}
	}

}
