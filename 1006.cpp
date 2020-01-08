/**
这题我居然一直没能理解 12,.,n 的意思，以为是12加上尾数，结果是从1数到n
数学思维一点没得
stoi ,to_string 都是C++11的新特性
string的append函数
*/

#include <iostream>
#include <string>
#include <set>
#include <sstream> 
#include <algorithm> 

using namespace std;

int main()
{
	string str;
	cin >> str;
	int ln;
	if (str.length() == 2) {
		str = "0" + str; ln = 10;
	}
	else if (str.length() == 1) {
		str = "00" + str; ln = 10;
	}
	else if (str.length() == 3) {
		ln = 100;
	}

	//	cout<<"str:"<<str<<"; "; 
	//	cout<<"ln:"<<ln<<"; "; 

	string ans;
	int bai = stoi(str.substr(0, 1)); 	//cout<<"bai:"<<bai<<"; "; 
	int shi = stoi(str.substr(1, 1));	//cout<<"shi:"<<shi<<"; "; 
	int ge = stoi(str.substr(2.1));				//cout<<"ge:"<<ge<<"; "; 

	ans.append(bai, 'B');
	ans.append(shi, 'S');

	for (int i = 1; i <= ge; i++) {
		ans.append(to_string(i));
	}

	cout << ans;
	return 0;
}




/**
1006 换个格式输出整数 (15分)
让我们用字母 B 来表示“百”、字母 S 表示“十”，用 12...n 来表示不为零的个位数字 n（<10），换个格式来输出任一个不超过 3 位的正整数。例如 234 应该被输出为 BBSSS1234，因为它有 2 个“百”、3 个“十”、以及个位的 4。

输入格式：
每个测试输入包含 1 个测试用例，给出正整数 n（<1000）。

输出格式：
每个测试用例的输出占一行，用规定的格式输出 n。

输入样例 1：
234



输出样例 1：
BBSSS1234



输入样例 2：
23



输出样例 2：
SS123
*/