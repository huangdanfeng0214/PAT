/** 
������debug�����⣬����������ķ�ʽ�㶨
Ȼ��������auto��Ч������ �޸���Dev C++������ ����֧����C++11������

*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int p = 0; int a = 0; int t = 0;
	int lh;
	cin >> lh;
	for (int i = 0; i < lh; i++) {
		string str;
		cin >> str;
		p = 0; a = 0; t = 0;
		int left = str.find("P");
		int right = str.length() - str.rfind("T") - 1;
		int mid = str.length() - left - right - 2;
		//cout<<"left="<<left<<"; ";
		//cout<<"riht="<<right<<"; ";
		//cout<<"mid="<<mid<<"; ";

		for (int j = 0; j < str.length(); j++) {
			if (str[j] == 'P') p++;
			if (str[j] == 'T') t++;
			if (str[j] == 'A') a++;
		}
		//cout<<"p="<<p<<"; "; cout<<"t="<<t<<"; "; cout<<"a="<<a<<"; ";
		if (p == 1 && t == 1 && left * mid == right && left + mid + right == a && a != 0)
			cout << "YES" << endl;
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}

/**
1003 ��Ҫͨ���� (20��)
������ȷ�����Զ�����ϵͳ�����������˻�ϲ�Ļظ����������� PAT �ġ�����ȷ�������� ���� ֻҪ������ַ�����������������ϵͳ�����������ȷ��������������𰸴��󡱡�

�õ�������ȷ���������ǣ�

�ַ����б������ P�� A�� T�������ַ��������԰��������ַ���
�������� xPATx ���ַ��������Ի�á�����ȷ�������� x �����ǿ��ַ����������ǽ�����ĸ A ��ɵ��ַ�����
��� aPbTc ����ȷ�ģ���ô aPbATca Ҳ����ȷ�ģ����� a�� b�� c �������ǿ��ַ����������ǽ�����ĸ A ��ɵ��ַ�����
���ھ�����Ϊ PAT дһ���Զ����г����ж���Щ�ַ����ǿ��Ի�á�����ȷ���ġ�

�����ʽ��
ÿ������������� 1 �������������� 1 �и���һ�������� n (<10)������Ҫ�����ַ���������������ÿ���ַ���ռһ�У��ַ������Ȳ����� 100���Ҳ������ո�

�����ʽ��
ÿ���ַ����ļ����ռһ�У�������ַ������Ի�á�����ȷ��������� YES��������� NO��

����������
8
PAT
PAAT
AAPATAA
AAPAATAAAA
xPATx
PT
Whatever
APAAATAA



���������
YES
YES
YES
YES
NO
NO
NO
NO
*/