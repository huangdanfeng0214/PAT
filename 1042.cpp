/**
转小写的方法：tolower
转大写的方法：toupper
源码：
  #define _tolower(c) ((c) - 'A' + 'a')
  #define _toupper(c) ((c) - 'a' + 'A')

*/
#include <iostream>
#include <string>
#include <vector>
#include<set>
#include<map>
#include <stack>
#include <algorithm>
#include <sstream>
#include<cctype>



using namespace std;


int main()
{
	int v[26] = { 0 };
	string str;
	getline(cin, str);
	for (int i = 0; i < str.length(); i++) {
		str[i] = tolower(str[i]);
	}
	for (auto tmp : str) {
		if (islower(tmp)) {
			v[tmp - 'a']++;
		}
	}
	int max = 0; string ss;
	for (int i = 0; i < 26; i++) {
		if (v[i] > max) {
			max = v[i];
			str = i + 'a'; //数字转字母，int型转string 型 
		}
	}

	cout << str << " " << max << endl;


}

/**
1042 字符统计 (20分)
请编写程序，找出一段给定文字中出现最频繁的那个英文字母。

输入格式：
输入在一行中给出一个长度不超过 1000 的字符串。字符串由 ASCII 码表中任意可见字符及空格组成，至少包含 1 个英文字母，以回车结束（回车不算在内）。

输出格式：
在一行中输出出现频率最高的那个英文字母及其出现次数，其间以空格分隔。如果有并列，则输出按字母序最小的那个字母。统计时不区分大小写，输出小写字母。

输入样例：
This is a simple TEST.  There ARE numbers and other symbols 1&2&3...........



输出样例：
e 7
*/