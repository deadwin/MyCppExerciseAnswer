//ex6.4��������׳�
//ex6.5����ʵ�ξ���ֵ
#include<iostream>
using namespace std;
//�׳�
int jiecheng(int n)
{
	int sum = 1;
	while (n > 1)
	{
		sum *= n;
		n--;
	}
	if (n < 0)
	{
		return 0;
	}
	return sum;
}
//����ֵ
int jueduizhi(int n)
{
	return n > 0 ? n : -n;
}
int main()
{
	cout << "input a num:" << endl;
	int n;
	cin >> n;
	cout << "num�Ľ׳�:" << jiecheng(n) << endl;
	cout << "num�ľ���ֵ��" << jueduizhi(n) << endl;
	return 0;
}
//�ο�http://blog.csdn.net/fengzhanghao23/article/details/48462387