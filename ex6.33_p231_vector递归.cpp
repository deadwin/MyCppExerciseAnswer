//ex6.33编写一个递归函数，输出vector对象的内容
#include<vector>
#include<string>
#include<iostream>
using namespace std;
void print(vector<int>ivec, vector<int>::size_type j)
{
	if (j != 0)
	{
		print(ivec, j - 1);
	}
	cout << ivec[j] << endl;
}
int main()
{
	int val;
		vector<int>ivec;
	while (cin >> val)
	{
		ivec.push_back(val);
	}
	print(ivec, ivec.size()-1);
	return 0;
}
//递归完毕才输出