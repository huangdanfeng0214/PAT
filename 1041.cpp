/**
 ͨ����0.4���ϣ�����û��ɶ�ӵģ�û�����������

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
	int n, m, t;
	string number;
	int test;
	string prod;
	map<int, string>map;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> number >> test >> prod;
		map[test] = number + " " + prod;
	}

	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> t;
		cout << map[t] << endl;
	}
}
