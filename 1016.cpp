/**
char 和 string 的比较
char 和 int 的比较 char-'0' 变成 int
666 => 循环：p=p*10+ge
*/
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <stack>
#include<cctype>

using namespace std;

int main()
{
	string a, b;
	int da, db, cnta = 0, cntb = 0;
	int pa = 0, pb = 0;
	cin >> a >> da >> b >> db;
	for (int i = 0; i < a.length(); i++) {
		if (da == (a[i] - '0')) {
			cnta++;
		}
	}

	for (auto x : b) {
		if (db == (x - '0')) {
			cntb++;
		}
	}
	//cout<<"cnta:"<<cnta<<",cntb:"<<cntb<<endl; 
	for (int i = 0; i < cnta; i++) {
		pa = pa * 10 + da;  //往高位叠数字的方法 
		//cout<<"pa:"<<pa<<endl; 
	}
	for (int i = 0; i < cntb; i++) {
		pb = pb * 10 + db;
		//cout<<"pb:"<<pb<<endl;
	}
	//cout<<"pa:"<<pa<<",pb:"<<pb<<endl; 
	cout << pa + pb;

}

/**
1016 部分A+B (15分)
正整数 A 的“D
​A
​​ （为 1 位整数）部分”定义为由 A 中所有 D
​A
​​  组成的新整数 P
​A
​​ 。例如：给定 A=3862767，D
​A
​​ =6，则 A 的“6 部分”P
​A
​​  是 66，因为 A 中有 2 个 6。

现给定 A、D
​A
​​ 、B、D
​B
​​ ，请编写程序计算 P
​A
​​ +P
​B
​​ 。

输入格式：
输入在一行中依次给出 A、D
​A
​​ 、B、D
​B
​​ ，中间以空格分隔，其中 0<A,B<10
​10
​​ 。

输出格式：
在一行中输出 P
​A
​​ +P
​B
​​  的值。

输入样例 1：
3862767 6 13530293 3



输出样例 1：
399



输入样例 2：
3862767 1 13530293 8



输出样例 2：
0
*/