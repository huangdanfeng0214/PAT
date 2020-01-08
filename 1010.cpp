/**
对于题目意思的理解
*/
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <stack>

using namespace std;

int main()
{
	int n, m, flag = 0;
	//用flag判断是否是最终的空格 
	while (cin >> n >> m) {
		int ans = n * m;
		if (m != 0) {
			if (flag == 1) {
				cout << " ";
			}
			cout << ans << " " << m - 1;
			flag = 1;
		}
	}
	if (flag == 0) {
		cout << "0 0";
	}
	//题意：多项式非零项   系数和指数
	//题目意思 多加领悟 
	//没搞懂 为什么零多项式以0 0 结尾， 
}


/**
1010 一元多项式求导 (25分)
设计函数求一元多项式的导数。（注：x
?n
?? （n为整数）的一阶导数为nx
?n?1
?? 。）

输入格式:
以指数递降方式输入多项式非零项系数和指数（绝对值均为不超过 1000 的整数）。数字间以空格分隔。

输出格式:
以与输入相同的格式输出导数多项式非零项的系数和指数。数字间以空格分隔，但结尾不能有多余空格。注意“零多项式”的指数和系数都是 0，但是表示为 0 0。

输入样例:
3 4 -5 2 6 1 -2 0



输出样例:
12 3 -10 1 6 0
*/