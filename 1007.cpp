/**
判断素数的函数isprime：
对于数字a，i从2到根号a，如果a能够被其中⼀一个i整除，说明a不是素数，return false，否则说明a是素数return true；
对于输⼊入数据N，for循环中的i从5到N依次判断
i-2和i是否是素数，如果都是素数，则统计个数的cnt++，最后输出cnt即可～
*/

/**
数据结构vector的使用， 好像用个数组，用个list都没关系的这边
vector 的添加 是push_back
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isprime(int a) {
	for (int i = 2; i * i <= a; i++) {
		if (a % i == 0) return false;
	}
	return true;
}

int main()
{
	int n;
	vector <int> susu;
	while (cin >> n) {
		for (int i = 1; i <= n; i++) {
			if (isprime(i)) susu.push_back(i);
		}

		int ans = 0;
		for (int i = 0; i < susu.size(); i++) {
			if (susu[i + 1] - susu[i] == 2) {
				ans++;
			}
		}
		cout << ans;
	}
}


