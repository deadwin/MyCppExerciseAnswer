//3.41 ��дһ�γ��������������ʼ��һ��vector����
//3.42 ��дһ�γ��򣬽���������Ԫ�ص�vector���󿽱���һ����������
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