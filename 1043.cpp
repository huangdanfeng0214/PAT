/**
初始化数组
int v[6] ={0,0,0,0,0,0};
就是一个int型的数组
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
	int v[6] = { 0,0,0,0,0,0 };
	string str;
	cin >> str;
	for (auto tmp : str) {
		if ('P' == tmp) {
			v[0]++;
		}
		else if ('A' == tmp) {
			v[1]++;
		}
		else if ('T' == tmp) {
			v[2]++;
		}
		else if ('e' == tmp) {
			v[3]++;
		}
		else if ('s' == tmp) {
			v[4]++;
		}
		else if ('t' == tmp) {
			v[5]++;
		}
	}
	int max = 0;
	if (max < v[0]) max = v[0];
	if (max < v[1]) max = v[1];
	if (max < v[2]) max = v[2];
	if (max < v[3]) max = v[3];
	if (max < v[4]) max = v[4];
	if (max < v[5]) max = v[5];

	//for(int i=0;i<6;i++){
	//	cout<<"v"+i<<":"<<v[i]<<",";
	//}cout<<"max:"<<max<<endl;

	for (int i = 0; i < max; i++) {
		if (v[0] > i) {
			cout << "P";
		}
		if (v[1] > i) {
			cout << "A";
		}
		if (v[2] > i) {
			cout << "T";
		}
		if (v[3] > i) {
			cout << "e";
		}
		if (v[4] > i) {
			cout << "s";
		}
		if (v[5] > i) {
			cout << "t";
		}
	}

}
