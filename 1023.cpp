/**
"������һ���и��� 10 ���Ǹ�������˳���ʾ����ӵ������ 0������ 1���������� 9 �ĸ�����"
��Ŀ��˼Ҫ�Ķ�����

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
	string zero;
	string number;
	string ans;
	for (int i = 0; i < 10; i++) {
		int n; cin >> n;
		if (i == 0 && n != 0) {
			for (int j = 0; j < n; j++) {
				zero += "0";
			}
		}
		else if (n != 0) {
			for (int j = 0; j < n; j++) {
				number += to_string(i);
			}
		}
	}
	sort(number.begin(), number.end());
	if (zero.length() == 0) {
		ans = number;
	}
	else {
		ans.append(number.substr(0, 1)).append(zero).append(number.substr(1, number.length() - 1));
	}

	cout << ans << endl;
}

/**
1023 �����С�� (20��)
�������� 0-9 �����ɸ��������������˳��������Щ���֣�������ȫ��ʹ�á�Ŀ����ʹ�����õ�����������С��ע�� 0 ��������λ�������磺�������� 0������ 1������ 5��һ�� 8�����ǵõ�����С�������� 10015558��

�ָ������֣����д��������ܹ���ɵ���С������

�����ʽ��
������һ���и��� 10 ���Ǹ�������˳���ʾ����ӵ������ 0������ 1���������� 9 �ĸ�������������һ���ո�ָ���10 �����ֵ��ܸ��������� 50��������ӵ�� 1 ���� 0 �����֡�

�����ʽ��
��һ��������ܹ���ɵ���С������

����������
2 2 0 0 0 3 0 0 1 0



���������
10015558
*/