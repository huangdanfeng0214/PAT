
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

	int n;
	cin >> n;
	int a = 0, b = 0, a1, a2, b1, b2;
	for (int i = 1; i <= n; i++) {
		cin >> a1 >> a2 >> b1 >> b2;
		if (a2 == a1 + b1 && b2 == a1 + b1) {
		}
		else if (a2 == a1 + b1) {
			b++;
		}
		else if (b2 == a1 + b1) {
			a++;
		}
	}
	cout << a << " " << b;
}
