/**1.map�Ӻ���ǰ����
for (auto it = map.rbegin(); it != map.rend(); it++) {

	cout << it->second << endl;;
}
*/

/** ȡmap����β��ֵ
	auto begin = map.begin();
	auto end = map.rbegin();
*/
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	int lh;
	map<int, string>map;
	cin >> lh;
	for (int i = 0; i < lh; i++) {
		string name; string studentid; int score;
		cin >> name >> studentid >> score;
		map[score] = name + " " + studentid;
	}
	auto begin = map.rbegin();
	auto end = map.begin();
	cout << begin->second << endl;
	cout << end->second << endl;
	return 0;
}


/**
1004 �ɼ����� (20��)
���� n��>0����ѧ����������ѧ�š��ɼ����ֱ�����ɼ���ߺͳɼ����ѧ����������ѧ�š�

�����ʽ��
ÿ������������� 1 ��������������ʽΪ

�� 1 �У������� n
�� 2 �У��� 1 ��ѧ�������� ѧ�� �ɼ�
�� 3 �У��� 2 ��ѧ�������� ѧ�� �ɼ�
  ... ... ...
�� n+1 �У��� n ��ѧ�������� ѧ�� �ɼ�



����������ѧ�ž�Ϊ������ 10 ���ַ����ַ������ɼ�Ϊ 0 �� 100 ֮���һ�����������ﱣ֤��һ�����������û������ѧ���ĳɼ�����ͬ�ġ�

�����ʽ��
��ÿ������������� 2 �У��� 1 ���ǳɼ����ѧ����������ѧ�ţ��� 2 ���ǳɼ����ѧ����������ѧ�ţ��ַ������� 1 �ո�

����������
3
Joe Math990112 89
Mike CS991301 100
Mary EE990830 95



���������
Mike CS991301
Joe Math990112
*/