//ex5.20
//ex5.21
#include<string>
#include<iostream>
using namespace std;
int main(){
	string str1, str2;
	cin >> str1;
	str2 = str1;
	unsigned cnt = 0;
	while (cin >> str1)
	{
		if (str1 == str2&&str1[0]>='A'&&str1[0]<='Z')
		{
			++cnt;
			cout << str1 << endl;
			break;
		}
		str2 = str1;
	}
	if (cnt == 0)
	{
		cout << "没用重复单词" << endl;
	}
	return 0;
}