/**
תСд�ķ�����tolower
ת��д�ķ�����toupper
Դ�룺
  #define _tolower(c) ((c) - 'A' + 'a')
  #define _toupper(c) ((c) - 'a' + 'A')

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
	int v[26] = { 0 };
	string str;
	getline(cin, str);
	for (int i = 0; i < str.length(); i++) {
		str[i] = tolower(str[i]);
	}
	for (auto tmp : str) {
		if (islower(tmp)) {
			v[tmp - 'a']++;
		}
	}
	int max = 0; string ss;
	for (int i = 0; i < 26; i++) {
		if (v[i] > max) {
			max = v[i];
			str = i + 'a'; //����ת��ĸ��int��תstring �� 
		}
	}

	cout << str << " " << max << endl;


}

/**
1042 �ַ�ͳ�� (20��)
���д�����ҳ�һ�θ��������г�����Ƶ�����Ǹ�Ӣ����ĸ��

�����ʽ��
������һ���и���һ�����Ȳ����� 1000 ���ַ������ַ����� ASCII ���������ɼ��ַ����ո���ɣ����ٰ��� 1 ��Ӣ����ĸ���Իس��������س��������ڣ���

�����ʽ��
��һ�����������Ƶ����ߵ��Ǹ�Ӣ����ĸ������ִ���������Կո�ָ�������в��У����������ĸ����С���Ǹ���ĸ��ͳ��ʱ�����ִ�Сд�����Сд��ĸ��

����������
This is a simple TEST.  There ARE numbers and other symbols 1&2&3...........



���������
e 7
*/