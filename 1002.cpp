#include <iostream>
#include <string>

using namespace std;

string changeLetter(string n) {
	if (n == "0") return "ling";
	if (n == "1") return "yi";
	if (n == "2") return "er";
	if (n == "3") return "san";
	if (n == "4") return "si";
	if (n == "5") return "wu";
	if (n == "6") return "liu";
	if (n == "7") return "qi";
	if (n == "8") return "ba";
	if (n == "9") return "jiu";
}
int main()
{
	string s;
	cin >> s;
	int ans = 0;
	for (int i = 0; i < s.size(); i++) {
		string subs = s.substr(i, 1);
		int b = stoi(subs);
		ans += b;
	}
	string s2 = to_string(ans);
	for (int j = 0; j < s2.size(); j++) {
		cout << changeLetter(s2.substr(j, 1));
		if (j != s2.size() - 1) {
			cout << " ";
		}
	}
	return 0;
}

/**
1002 写出这个数 (20分)
读入一个正整数 n，计算其各位数字之和，用汉语拼音写出和的每一位数字。

输入格式：
每个测试输入包含 1 个测试用例，即给出自然数 n 的值。这里保证 n 小于 10
​100
​​ 。

输出格式：
在一行内输出 n 的各位数字之和的每一位，拼音数字间有 1 空格，但一行中最后一个拼音数字后没有空格。

输入样例：
1234567890987654321123456789



输出样例：
yi san wu

*/