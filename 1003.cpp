/** 
遇到了debug的问题，最后采用输出的方式搞定
然后遇到了auto无效的问题 修改了Dev C++的配置 让他支持了C++11的特性

*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int p = 0; int a = 0; int t = 0;
	int lh;
	cin >> lh;
	for (int i = 0; i < lh; i++) {
		string str;
		cin >> str;
		p = 0; a = 0; t = 0;
		int left = str.find("P");
		int right = str.length() - str.rfind("T") - 1;
		int mid = str.length() - left - right - 2;
		//cout<<"left="<<left<<"; ";
		//cout<<"riht="<<right<<"; ";
		//cout<<"mid="<<mid<<"; ";

		for (int j = 0; j < str.length(); j++) {
			if (str[j] == 'P') p++;
			if (str[j] == 'T') t++;
			if (str[j] == 'A') a++;
		}
		//cout<<"p="<<p<<"; "; cout<<"t="<<t<<"; "; cout<<"a="<<a<<"; ";
		if (p == 1 && t == 1 && left * mid == right && left + mid + right == a && a != 0)
			cout << "YES" << endl;
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}

/**
1003 我要通过！ (20分)
“答案正确”是自动判题系统给出的最令人欢喜的回复。本题属于 PAT 的“答案正确”大派送 —— 只要读入的字符串满足下列条件，系统就输出“答案正确”，否则输出“答案错误”。

得到“答案正确”的条件是：

字符串中必须仅有 P、 A、 T这三种字符，不可以包含其它字符；
任意形如 xPATx 的字符串都可以获得“答案正确”，其中 x 或者是空字符串，或者是仅由字母 A 组成的字符串；
如果 aPbTc 是正确的，那么 aPbATca 也是正确的，其中 a、 b、 c 均或者是空字符串，或者是仅由字母 A 组成的字符串。
现在就请你为 PAT 写一个自动裁判程序，判定哪些字符串是可以获得“答案正确”的。

输入格式：
每个测试输入包含 1 个测试用例。第 1 行给出一个正整数 n (<10)，是需要检测的字符串个数。接下来每个字符串占一行，字符串长度不超过 100，且不包含空格。

输出格式：
每个字符串的检测结果占一行，如果该字符串可以获得“答案正确”，则输出 YES，否则输出 NO。

输入样例：
8
PAT
PAAT
AAPATAA
AAPAATAAAA
xPATx
PT
Whatever
APAAATAA



输出样例：
YES
YES
YES
YES
NO
NO
NO
NO
*/