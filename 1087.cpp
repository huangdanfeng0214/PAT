/**
 cmath
 floor : ��ذ�ȡ��
 ceil�� ���컨��ȡ��
 round: ��������
*/
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
	set<int>ansset;
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int ans = floor(i / 2) + floor(i / 3) + floor(i / 5);
		ansset.insert(ans);
	}
	cout << ansset.size();
}
