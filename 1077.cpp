
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
#include <numeric>

using namespace std;

//求平均的函数 
float fucation(vector<int> v) {
	int sum = 0;
	for (int i = 0; i < v.size(); i++) {
		sum += v[i];
	}
	float ans = sum * 1.0 / v.size();
	return ans;

}

int main()
{
	int n, m, a;
	cin >> n >> m;
	int ans[n];
	vector<int> v[n];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a;
			if (j == 0) {
				ans[i] = a;
			}
			else {
				if (a <= m && a >= 0) {
					v[i].push_back(a);
				}
			}
		}
	}

	for (int i = 0; i < n; i++) {
		sort(v[i].begin(), v[i].end());
		v[i].erase(v[i].begin());
		v[i].erase(--v[i].end());//删除最后一个元素！！！ 

		float avg = fucation(v[i]);
		float ans2 = (ans[i] + avg) * 1.0 / 2;
		cout << round(ans2) << endl;
	}

}

