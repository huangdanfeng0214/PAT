/**
�����Ҿ�Ȼһֱû����� 12,.,n ����˼����Ϊ��12����β��������Ǵ�1����n
��ѧ˼άһ��û��
stoi ,to_string ����C++11��������
string��append����
*/

#include <iostream>
#include <string>
#include <set>
#include <sstream> 
#include <algorithm> 

using namespace std;

int main()
{
	string str;
	cin >> str;
	int ln;
	if (str.length() == 2) {
		str = "0" + str; ln = 10;
	}
	else if (str.length() == 1) {
		str = "00" + str; ln = 10;
	}
	else if (str.length() == 3) {
		ln = 100;
	}

	//	cout<<"str:"<<str<<"; "; 
	//	cout<<"ln:"<<ln<<"; "; 

	string ans;
	int bai = stoi(str.substr(0, 1)); 	//cout<<"bai:"<<bai<<"; "; 
	int shi = stoi(str.substr(1, 1));	//cout<<"shi:"<<shi<<"; "; 
	int ge = stoi(str.substr(2.1));				//cout<<"ge:"<<ge<<"; "; 

	ans.append(bai, 'B');
	ans.append(shi, 'S');

	for (int i = 1; i <= ge; i++) {
		ans.append(to_string(i));
	}

	cout << ans;
	return 0;
}




/**
1006 ������ʽ������� (15��)
����������ĸ B ����ʾ���١�����ĸ S ��ʾ��ʮ������ 12...n ����ʾ��Ϊ��ĸ�λ���� n��<10����������ʽ�������һ�������� 3 λ�������������� 234 Ӧ�ñ����Ϊ BBSSS1234����Ϊ���� 2 �����١���3 ����ʮ�����Լ���λ�� 4��

�����ʽ��
ÿ������������� 1 ���������������������� n��<1000����

�����ʽ��
ÿ���������������ռһ�У��ù涨�ĸ�ʽ��� n��

�������� 1��
234



������� 1��
BBSSS1234



�������� 2��
23



������� 2��
SS123
*/