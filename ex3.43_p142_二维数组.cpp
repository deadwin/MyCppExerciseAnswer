//ex3.43 ��д3���汾�ķ���������������ia��Ԫ��
//ex3.44��д3.43��ʹ�����ͱ���������ѭ�����Ʊ���������
#include<iostream>
using namespace std;
int main()
{
	typedef int arr_1;
	typedef int arr1;
	typedef int shuzu[3];
	int ia[2][3] = { { 1, 2, 3, }, { 4, 5, 6 } };
	//�汾1��ʹ�÷�Χfor�������������
	for (arr_1(&a)[3] : ia)
		for (arr1 &b : a)
			cout << b << " ";
	cout << endl;
	//�汾2��ʹ���±������
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 3; j++)
			cout << ia[i][j] << ' ';
	cout << endl;
	//�汾3��ʹ��ָ��
	for (int(*p)[3] = ia; p != ia + 2; p++)
		for (int *q = *p; q != *p + 3; q++)
			cout << *q << ' ';
	cout << endl;
	//�������͵ı���
	for (shuzu *p1 = ia; p1 != ia + 2; p1++)
		for (arr1 *p2 = *p1; p2 != *p1 + 3; p2++)
			cout << *p2 << ' ';
	cout << endl;

	return 0;
}