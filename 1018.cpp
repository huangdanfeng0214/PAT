//仔细，v写错了，写成了v[0],结果一直发现不了问题。 
//仔细，enl写成了endl, 结果一直发现不了问题。 
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <stack>
#include<cctype>
#include<map>

using namespace std;

string cmp(string jia, string yi) {
	if (jia == yi) return "pin";
	else if (jia == "C") {
		if (yi == "J") return "jia";
		else if (yi == "B") return "yi";
	}
	else if (jia == "J") {
		if (yi == "B") return "jia";
		else if (yi == "C") return "yi";
	}
	else if (jia == "B") {
		if (yi == "C") return "jia";
		else if (yi == "J") return "yi";
	}
}

string max(vector<string>v) {
	int cntC = 0, cntJ = 0, cntB = 0, max = 0;
	for (int i = 0; i < v.size(); i++) {
		if (v.at(i) == "C") cntC++;
		else if (v.at(i) == "J") cntJ++;
		else if (v.at(i) == "B") cntB++;
	}
	if (max < cntB) max = cntB;
	if (max < cntC) max = cntC;
	if (max < cntJ) max = cntJ;

	//cout<<cntB<<", "<<cntC<<", "<<cntJ<<", "<<max<<endl;

	if (max == cntB) return "B";
	if (max == cntC) return "C";
	if (max == cntJ) return "J";
}

int main()
{
	vector<string> v[2];
	int cntJia, cntYi, cntPin = 0;
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		string jia, yi;
		cin >> jia >> yi;
		if (cmp(jia, yi) == "jia") {
			v[0].push_back(jia);
		}
		else if (cmp(jia, yi) == "yi") {
			v[1].push_back(yi);
		}
		else {
			cntPin++;
		}
	}
	cntJia = v[0].size();
	cntYi = v[1].size();
	cout << cntJia << " " << cntPin << " " << cntYi << endl;
	cout << cntYi << " " << cntPin << " " << cntJia << endl;
	cout << max(v[0]) << " " << max(v[1]) << endl;;


}

/**
1018 锤子剪刀布 (20分)
大家应该都会玩“锤子剪刀布”的游戏：两人同时给出手势，胜负规则如图所示：

FigCJB.jpg

现给出两人的交锋记录，请统计双方的胜、平、负次数，并且给出双方分别出什么手势的胜算最大。

输入格式：
输入第 1 行给出正整数 N（≤10
​5
​​ ），即双方交锋的次数。随后 N 行，每行给出一次交锋的信息，即甲、乙双方同时给出的的手势。C 代表“锤子”、J 代表“剪刀”、B 代表“布”，第 1 个字母代表甲方，第 2 个代表乙方，中间有 1 个空格。

输出格式：
输出第 1、2 行分别给出甲、乙的胜、平、负次数，数字间以 1 个空格分隔。第 3 行给出两个字母，分别代表甲、乙获胜次数最多的手势，中间有 1 个空格。如果解不唯一，则输出按字母序最小的解。

输入样例：
10
C J
J B
C B
B B
B C
C C
C B
J B
B C
J J



输出样例：
5 3 2
2 3 5
B B
*/