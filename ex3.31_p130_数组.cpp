//编写一段程序，定义要给含有10个int的数组，使元素值=下标值
#include<vector>
using namespace std;
int main()
{
	const int size = 10;
	//1.使元素值=下标值
	int a[size];
	for (int i = 0; i < size; i++)
	{
		a[i] = i;
	}
	//2.拷贝数组给另一个数组
	int a2[size];
	for (int i = 0; i < size; i++)
	{
		a2[i] = a[i];
	}
	//3.用vector实现拷贝数组值
	vector<int>ivec;
	for (int i = 0; i < size; i++)
	{
		ivec.push_back(a[i]);
	}
	return 0;
}