﻿/**
花了很久的時間在調試上面
*/
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <stack>

using namespace std;

int main()
{
	int a, n, j = 0;
	int f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
	int a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a;
		if (a % 5 == 0 && a % 2 == 0) {
			f1 = 1;
			a1 += a;
		}
		else if (a % 5 == 1) {
			f2 = 1;
			a2 = (j % 2 == 0) ? a2 += a : a2 -= a;
			//	cout<<"j: "<<j<<", a2: "<<a2<<endl; 調試老半天， 
			j++;
		}
		else if (a % 5 == 2) {
			f3 = 1;
			a3++;
		}
		else if (a % 5 == 3) {
			f4++;
			a4 += a;//求和 
			//cout<<"a: "<<a<<", a4: "<<a4<<endl;  
		}
		else if (a % 5 == 4) {
			f5 = 1;
			if (a > a5) a5 = a;
		}
	}

	//cout<<a1<<" "<<a2<<" "<<a3<<" "<<a4<<" "<<a5<<" "<<endl;
	//cout<<f1<<" "<<f2<<" "<<f3<<" "<<f4<<" "<<f5<<" "<<endl;

	for (int i = 0; i < 5; i++) {
		if (i == 0) {
			if (f1 == 0) cout << "N "; else cout << a1 << " ";
		}
		else if (i == 1) {
			if (f2 == 0) cout << "N "; else cout << a2 << " ";
		}
		else if (i == 2) {
			if (f3 == 0) cout << "N "; else cout << a3 << " ";
		}
		else if (i == 3) {
			if (f4 == 0) cout << "N"; else printf("%.1f", a4 * 1.0 / f4); cout << " ";//todo 保留1位小数 
		}
		else if (i == 4) {
			if (f5 == 0) cout << "N"; else cout << a5;
		}
	}
}


/**
1012 数字分类 (20分)
给定一系列正整数，请按要求对数字进行分类，并输出以下 5 个数字：

A
​1
​​  = 能被 5 整除的数字中所有偶数的和；
A
​2
​​  = 将被 5 除后余 1 的数字按给出顺序进行交错求和，即计算 n
​1
​​ −n
​2
​​ +n
​3
​​ −n
​4
​​ ⋯；
A
​3
​​  = 被 5 除后余 2 的数字的个数；
A
​4
​​  = 被 5 除后余 3 的数字的平均数，精确到小数点后 1 位；
A
​5
​​  = 被 5 除后余 4 的数字中最大数字。
输入格式：
每个输入包含 1 个测试用例。每个测试用例先给出一个不超过 1000 的正整数 N，随后给出 N 个不超过 1000 的待分类的正整数。数字间以空格分隔。

输出格式：
对给定的 N 个正整数，按题目要求计算 A
​1
​​ ~A
​5
​​  并在一行中顺序输出。数字间以空格分隔，但行末不得有多余空格。

若其中某一类数字不存在，则在相应位置输出 N。

输入样例 1：
13 1 2 3 4 5 6 7 8 9 10 20 16 18



输出样例 1：
30 11 2 9.7 9



输入样例 2：
8 1 2 4 5 6 7 9 16



输出样例 2：
N 11 2 N 9
*/