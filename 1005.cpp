/**set
set�Ĳ��룺set.insert(n);
set�İ���Ԫ�أ�set.count(tmp)
set��ɾ��Ԫ�أ�set.rease(n);
*/

/**���һ���ո�����
	if(it!=(--nlist.rend())){
			cout<<" ";
		}
*/

#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
	int lh;
	cin >> lh;
	set<int> nlist;
	set<int> dellist;

	for (int i = 0; i < lh; i++) {
		int n; cin >> n; nlist.insert(n);
		while (n != 1) {
			if (n % 2 == 0) n = n / 2;
			else n = (n * 3 + 1) / 2;
			dellist.insert(n);
		}
	}

	for (auto tmp : dellist) {
		if (nlist.count(tmp)) {
			nlist.erase(tmp);
		}
	}

	for (auto it = nlist.rbegin(); it != nlist.rend(); it++) {
		cout << *it;
		if (it != (--nlist.rend())) {
			cout << " ";
		}
	}

	return 0;
}

/**
1005 ����(3n+1)���� (25��)
������(Callatz)�����Ѿ���1001�и������������������Ŀ������΢��Щ���ӡ�

��������֤�����Ȳ����ʱ��Ϊ�˱����ظ����㣬���Լ�¼�µ��ƹ�����������ÿһ����������� n=3 ������֤��ʱ��������Ҫ���� 3��5��8��4��2��1�������Ƕ� n=5��8��4��2 ������֤��ʱ�򣬾Ϳ���ֱ���ж������Ȳ������α��������Ҫ�ظ����㣬��Ϊ�� 4 �����Ѿ�����֤3��ʱ���������ˣ����ǳ� 5��8��4��2 �Ǳ� 3�����ǡ����������ǳ�һ�������е�ĳ���� n Ϊ���ؼ���������� n ���ܱ������е��������������ǡ�

���ڸ���һϵ�д���֤�����֣�����ֻ��Ҫ��֤���еļ����ؼ������Ϳ��Բ������ظ���֤���µ����֡������������ҳ���Щ�ؼ����֣������Ӵ�С��˳��������ǡ�

�����ʽ��
ÿ������������� 1 �������������� 1 �и���һ�������� K (<100)���� 2 �и��� K ��������ͬ�Ĵ���֤�������� n (1<n��100)��ֵ�����ּ��ÿո������

�����ʽ��
ÿ���������������ռһ�У����Ӵ�С��˳������ؼ����֡����ּ��� 1 ���ո��������һ�������һ�����ֺ�û�пո�

����������
6
3 5 6 7 8 11



���������
7 6
*/