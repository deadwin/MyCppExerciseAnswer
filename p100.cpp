//¶þ·ÖËÑË÷
#include<vector>
using std::vector;
#include<string>
#include<iostream>
using namespace std;
int main()
{
	vector<int>ivec;
	for (int i = 1; i <= 10; i++)
	{
		ivec.push_back(i);
		cout << ivec[i - 1] << "\t";
	}
	cout << endl;
	auto beg = ivec.begin();
	auto end = ivec.end();
	auto mid = beg + (end - beg) / 2;
	while (beg != end&& *mid!= 8)
	{
		if (8 < *mid)
		{
			end = mid;
		}
		else
		{
			beg = mid + 1;
		}
		mid = beg + (end - beg) / 2;
	}
	cout << *mid;
	return 0;
}