/**
 string�Ĳ��ҷ�����find
 string�Ąh������erase, ���Ҳ��܄h���ض��ַ���ֻ�܄h���ض�λ�õ��ַ�
 find �����Ҳ��� ���ص��� npos
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
	string total, need;
	getline(cin, total);
	getline(cin, need);
	//cin>>total>>need;
	//cout<<total<<" "<<need<<endl; 
	int tmp = 0;

	for (int i = 0; i < need.length(); i++) {
		if (total.npos != total.find(need[i])) {
			//cout<<tmp<<","<<need[i]<<","<<total<<","<<total.find(need[i])<<endl;
			total.erase(total.find(need[i]), 1);
			tmp++;
		}
	}
	if (tmp == need.size()) {
		cout << "YES " << total.size() << endl;
	}
	else {
		cout << "No " << need.size() - tmp << endl;
	}
}
