//ex4.32�����������ѭ���ĺ���
#include<iostream>
using namespace std;
int main()
{
	const int size = 5;
	int ia[size] = { 1, 2, 3, 4, 5 };
	for (int *ptr = ia, ix = 0; ix != size&&ptr != ia + size; ++ix, ++ptr)
	{
		//cout<<"1 ";
	}
	return 0;
}
//���ۣ�forѭ��ѭ����5��