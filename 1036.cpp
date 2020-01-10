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


int main()
{
	int n; string a;
	while (cin >> n >> a) {


		for (int i = 0; i < n; i++) {
			cout << a;
		}
		cout << endl;
		int m = round(n * 1.0 / 2); // 四舍五入 要在 float的基础上 

		for (int i = 0; i < m - 2; i++) {
			for (int j = 0; j < n; j++) {
				if (j == 0 || j == n - 1) {
					cout << a;
				}
				else {
					cout << " ";
				}
			}
			cout << endl;
		}


		for (int i = 0; i < n; i++) {
			cout << a;
		}
	}
}
