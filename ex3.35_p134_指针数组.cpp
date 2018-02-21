//ex3.35 编写一段程序，利用指针将数组中的元素置为0
#include<vector>
using namespace std;
int main()
{
	int a[4] = { 1, 2, 3, 4 };
	int* p=a;
	for (int i = 0; i < sizeof(a)/(int)sizeof(int);i++)
	{
		*p = 0;
		p++;
	}
	return 0;
}
