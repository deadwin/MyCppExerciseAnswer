//ex4.21编写程序找出vector<int>里的奇数值并翻倍
#include<vector>
#include<iostream>
using namespace std;
int main()
{
	vector<int>ivec;
	int n;
	cin >> n;
	while (n != -1)
	{
		ivec.push_back(n);
		cin >> n;
	}
	for (int i = 0; i< ivec.size(); i++)
	{
		if (ivec[i] % 2 != 0)
		{
			ivec[i] *= 2;
		}
	}
	return 0;
}