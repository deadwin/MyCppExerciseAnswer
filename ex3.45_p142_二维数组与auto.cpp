//ex3.45 ʹ��auto�ؼ��ָ�д3.43����
#include<iostream>
using namespace std;
int main()
{
	int ia[2][3] = { { 1, 2, 3, }, { 4, 5, 6 } };
	//�汾1��ʹ�÷�Χfor�������������
	for (auto &a : ia)            //��forѭ�������������ڲ��⣬������Ŀ��Ʊ�����Ӧ��Ϊ��������
		for (auto b : a)      //���Լ�����
			cout << b << " ";
	cout << endl;
	//�汾2��ʹ���±������
	for (auto i = 0; i < 2; i++)
		for (auto j = 0; j < 3; j++)
			cout << ia[i][j] << ' ';
	cout << endl;
	
	//�汾3��ʹ��ָ��
	for (auto  *p = ia; p != ia + 2; p++)// �˴�auto Ϊ��������
		for (auto *q = *p; q != *p + 3; q++)
			cout << *q << ' ';
	cout << endl;




	return 0;
}