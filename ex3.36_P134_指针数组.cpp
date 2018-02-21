#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int a[3] = { 1, 2, 3 }, b[3] = { 4, 5, 6 };
	for (int i = 0; i != sizeof(a) / (int)sizeof(int); i++)
	{
		if (a[i] != b[i])
		{
			cout << "不相等" << endl;
			break;
		}
	}
	vector<int>ivec1, ivec2;
	cout << "input v1,-1to end:" << endl;
	int num;
	cin >> num;
	while (num != -1)
	{
		ivec1.push_back(num);
		cin >> num;
	}
	cout << "input v2,-1 to end:" << endl;
	cin >> num;
	while (num != -1)
	{
		ivec2.push_back(num);
		cin >> num;
	}
	if (ivec1.size() != ivec2.size())
	{
		cout << "v1和v2长度不等" << endl;
	}
	vector<int>::iterator t1, t2;
	t1 = ivec1.begin();
	t2 = ivec2.begin();
	while (*t1 == *t2&&t1 != ivec1.end() && t2 !=
		ivec2.end())
	{
		t1++;
		t2++;
	}
	if (t1 == ivec1.end())
	{
		cout << "都相等" << endl;
	}
	else{
		cout << "1和2不相等" << endl;
	}
	
	return 0;
}