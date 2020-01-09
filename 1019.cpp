/**
 1.sort函數: sort(str.begin(),str.end(),less<int>())
 2.s.insert(0, 4 – s.length(), ‘0’) ： ?用来给不不?足4位的时候前?面补0
 3.运行超时，很可能是结束条件的关系 , 结束条件加上 ans != "0000"
 4.//	str.insert(0, 4 - str.length(), '0'); //说明题目有可能给我三位正整数，但是题目却没有说明
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

string change(int a) {
	string b = to_string(a);
	//s.insert(0, 4-s.length(),'X');
	if (b.length() == 4) return b;
	if (b.length() == 3) return "0" + b;
	if (b.length() == 2) return "00" + b;
	if (b.length() == 1) return "000" + b;
}

string function(string str) {
	int max, min;
	sort(str.begin(), str.end(), less<int>()); //从小到大排序 
	min = stoi(str);
	sort(str.begin(), str.end(), greater<int>()); //从大到小排序 
	max = stoi(str);
	cout << change(max) << " - " << change(min) << " = " << change(max - min) << endl;
	return change(max - min);
}


int main()
{
	string str;
	cin >> str;
	if (str[0] == str[1] && str[1] == str[2] && str[2] == str[3]) {
		cout << str << " - " << str << " = 0000" << endl;
	}
	else {
		str.insert(0, 4 - str.length(), '0'); //说明题目有可能给我三位正整数，但是题目却没有说明 
		string ans = function(str);
		while (ans != "6174" && ans != "0000") {
			ans = function(ans);
		}
	}
}


/**
1019 数字黑洞 (20分)
给定任一个各位数字不完全相同的 4 位正整数，如果我们先把 4 个数字按非递增排序，再按非递减排序，然后用第 1 个数字减第 2 个数字，将得到一个新的数字。一直重复这样做，我们很快会停在有“数字黑洞”之称的 6174，这个神奇的数字也叫 Kaprekar 常数。

例如，我们从6767开始，将得到

7766 - 6677 = 1089
9810 - 0189 = 9621
9621 - 1269 = 8352
8532 - 2358 = 6174
7641 - 1467 = 6174
... ...



现给定任意 4 位正整数，请编写程序演示到达黑洞的过程。

输入格式：
输入给出一个 (0,10
​4
​​ ) 区间内的正整数 N。

输出格式：
如果 N 的 4 位数字全相等，则在一行内输出 N - N = 0000；否则将计算的每一步在一行内输出，直到 6174 作为差出现，输出格式见样例。注意每个数字按 4 位数格式输出。

输入样例 1：
6767



输出样例 1：
7766 - 6677 = 1089
9810 - 0189 = 9621
9621 - 1269 = 8352
8532 - 2358 = 6174



输入样例 2：
2222



输出样例 2：
2222 - 2222 = 0000
*/