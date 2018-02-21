//括号配对问题 （未解决）
#include<iostream>
#include<vector>
#include<string>
using namespace std;
bool peidui(const string &s)
{
	return true;
}

int main()
{
	int i = 0;
	cin >> i;
	vector<string>s;
	for (int j = 0; j != i; j++)
	{
		string str, str2;
		cin >> str;
		for (int a = 0; a != str.size(); a++)
		{
			if (str.at(a) == '[' || str.at(a) == ']' || str.at(a) == '{' || str.at(a) == '}')
			{
				str2.push_back(str[a]);
			}
		}
		s.push_back(str2);
	}
	for (int m = 0; m != i; m++)
	{
		if (peidui(s[m]))
		{
			cout << "yes" << endl;
		}
		else
		{
			cout << "no" << endl;
		}
	}
	return 0;
}