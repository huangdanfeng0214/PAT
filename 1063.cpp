/**
ƽ���� pow��4,2��
������ sqrt(4) �� pow(4,0.5)
��������ֵ ��abs(-4)
����������ֵ�� fabc(-4.2)
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

	int n, a, b, max = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		if (max < a * a + b * b) {
			max = a * a + b * b;
		}
	}

	printf("%.2f", sqrt(max));
}
