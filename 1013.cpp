/**
if ， else if ,else
如果不加大括號的話，很容易弄錯
*/
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <stack>

using namespace std;

bool isprime(int a) {
	for (int i = 2; i * i <= a; i++) {
		if (a % i == 0) return false;
	}
	return true;
}

int main()
{
	int m, n;
	cin >> m >> n;
	//用while循環做最后的停止條件
	vector<int> v;
	int num = 2, cnt = 0;
	while (cnt < n) {
		if (isprime(num)) {
			cnt++;
			if (cnt >= m) {
				v.push_back(num);
			}
		}
		num++;
	}

	for (int i = 1; i <= v.size(); i++) {
		if (0 == i % 10) cout << v.at(i - 1) << endl;
		else if (v.size() == i) cout << v.at(i - 1) << endl;
		else cout << v.at(i - 1) << " ";
	}
}

/**
1013 数素数 (20分)
令 P
​i
​​  表示第 i 个素数。现任给两个正整数 M≤N≤10
​4
​​ ，请输出 P
​M
​​  到 P
​N
​​  的所有素数。

输入格式：
输入在一行中给出 M 和 N，其间以空格分隔。

输出格式：
输出从 P
​M
​​  到 P
​N
​​  的所有素数，每 10 个数字占 1 行，其间以空格分隔，但行末不得有多余空格。

输入样例：
5 27



输出样例：
11 13 17 19 23 29 31 37 41 43
47 53 59 61 67 71 73 79 83 89
97 101 103

*/