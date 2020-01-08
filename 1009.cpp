/**
栈
先进后出
*/

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <stack>

using namespace std;

int main()
{
	string str;
	getline(cin, str);
	stringstream ss;
	ss << str;

	stack<string> stack;
	string tmp;
	while (ss >> tmp) {
		stack.push(tmp);
	}
	while (!stack.empty()) {
		if (stack.size() == 1) {
			cout << stack.top();
		}
		else {
			cout << stack.top() << " ";
		}

		stack.pop();
	}
}
