
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <algorithm>
#include <sstream>
#include <cctype>
#include <cmath>

using namespace std;

int main()
{

	int n, a, b;
	cin >> n;
	string str;
	int v[1000] = { 0 };
	for (int i = 0; i < n; i++) {
		cin >> str >> b;
		int a = stoi(str.erase(str.find("-")));
		v[a] += b;
		//	cout<<a<<" "<<v[a]<<endl;
	}
	int max = 0, num;
	for (int i = 0; i < 1000; i++) {
		if (max < v[i]) {
			max = v[i];
			num = i;
		}
	}

	cout << num << " " << max;
}
