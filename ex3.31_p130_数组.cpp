//��дһ�γ��򣬶���Ҫ������10��int�����飬ʹԪ��ֵ=�±�ֵ
#include<vector>
using namespace std;
int main()
{
	const int size = 10;
	//1.ʹԪ��ֵ=�±�ֵ
	int a[size];
	for (int i = 0; i < size; i++)
	{
		a[i] = i;
	}
	//2.�����������һ������
	int a2[size];
	for (int i = 0; i < size; i++)
	{
		a2[i] = a[i];
	}
	//3.��vectorʵ�ֿ�������ֵ
	vector<int>ivec;
	for (int i = 0; i < size; i++)
	{
		ivec.push_back(a[i]);
	}
	return 0;
}