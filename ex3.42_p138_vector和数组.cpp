//3.41 编写一段程序，用整型数组初始化一个vector对象
//3.42 编写一段程序，将含有整型元素的vector对象拷贝给一个整型数组
#include<vector>
using namespace std;
int main()
{
	int a[] = { 1, 2, 3, 4 };
	vector<int>ivec(begin(a), end(a));
	int b[4];
	for (int i = 0; i < sizeof(ivec) / (int)sizeof(int); i++)
	{
		b[i] = ivec[i];
	}
	return 0;
}