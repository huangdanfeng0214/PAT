/**
初始化数组
int v[10] ={0,0,0,0,0,0,0,0,0,0};
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
	int v[10] = { 0,0,0,0,0,0,0,0,0,0 };
	string str;
	cin >> str;
	for (auto tmp : str) {
		if ('0' == tmp) {
			v[0]++;
		}
		else if ('1' == tmp) {
			v[1]++;
		}
		else if ('2' == tmp) {
			v[2]++;
		}
		else if ('3' == tmp) {
			v[3]++;
		}
		else if ('4' == tmp) {
			v[4]++;
		}
		else if ('5' == tmp) {
			v[5]++;
		}
		else if ('6' == tmp) {
			v[6]++;
		}
		else if ('7' == tmp) {
			v[7]++;
		}
		else if ('8' == tmp) {
			v[8]++;
		}
		else if ('9' == tmp) {
			v[9]++;
		}
	}
	for (int i = 0; i < 10; i++) {
		if (v[i] > 0) {
			cout << i << ":" << v[i] << endl;
		}
	}

}

/**
1021 个位数统计 (15分)
给定一个 k 位整数 N=d
​k−1
​​ 10
​k−1
​​ +⋯+d
​1
​​ 10
​1
​​ +d
​0
​​  (0≤d
​i
​​ ≤9, i=0,⋯,k−1, d
​k−1
​​ >0)，请编写程序统计每种不同的个位数字出现的次数。例如：给定 N=100311，则有 2 个 0，3 个 1，和 1 个 3。

输入格式：
每个输入包含 1 个测试用例，即一个不超过 1000 位的正整数 N。

输出格式：
对 N 中每一种不同的个位数字，以 D:M 的格式在一行中输出该位数字 D 及其在 N 中出现的次数 M。要求按 D 的升序输出。

输入样例：
100311



输出样例：
0:2
1:3
3:1
*/