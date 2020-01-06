/**
常用demo
*/
int main() {
	/**/
	return 0;
}

/**1.dev C++ 设置C++11特性
1. 工具 -> 编译器选项->编译器 编译时加入以下命令 -std=c++11
2. 工具 -> 编译器选项->程序（将 g++ 修改为 g++ -std=c++11 ）
*/


//1.头文件

/**1.map从后往前遍历
for (auto it = map.rbegin(); it != map.rend(); it++) {

	cout << it->second << endl;;
}
*/

/** 取map的首尾的值
	auto begin = map.begin();
	auto end = map.rbegin();
*/

//2.map排序