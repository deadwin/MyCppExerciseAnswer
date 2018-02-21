//练习3.18，判断是否合法
#include<vector>
using std::vector;
#include<string>
#include<iostream>
using namespace std;
int main()
{
	vector<int>ivec;
	//ivec[0]=42;  //不合法，对vector的 下标操作只能用于获取已存在的元素。
	ivec.push_back(42);//正确	
	return 0;
}