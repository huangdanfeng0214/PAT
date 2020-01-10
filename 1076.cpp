/**
 string的查找方法：find
 string的刪除方法erase, 并且不能刪掉特定字符，只能刪掉特定位置的字符
 find 方法找不到 返回的是 npos
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
	int n;
	cin >> n;
	string a, b, c, d;
	string ans[100];
	for (int i = 0; i < n; i++) {
		cin >> a >> b >> c >> d;
		//cout<<a<<""<<b<<""<<c<<""<<d<<" "; 
		if (a.npos != a.find("T")) {
			ans[i] = a.substr(0, 1);
		}
		else if (b.npos != b.find("T")) {
			ans[i] = b.substr(0, 1);
		}
		else if (c.npos != c.find("T")) {
			ans[i] = c.substr(0, 1);
		}
		else if (d.npos != d.find("T")) {
			ans[i] = d.substr(0, 1);
		}
		//cout<<ans[i]<<endl; 
	}

	//	map<String,int> map;
	//	for(int i=0;i<4;i++){
	//		map["A"+i]=i+1;
	//	}
	for (int i = 0; i < n; i++) {
		//		cout<<map[ans[i]];

		if (ans[i] == "A") {
			cout << 1;
		}
		else if (ans[i] == "B") {
			cout << 2;
		}
		else if (ans[i] == "C") {
			cout << 3;
		}
		else if (ans[i] == "D") {
			cout << 4;
		}

	}
}
