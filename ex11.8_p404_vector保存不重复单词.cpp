/*
ex11.8 vector���治�ظ��ĵ���
*/
#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main()
{
	vector<string>word;
	string str;
	while (cin>>str)
	{
		auto it = find(word.cbegin(), word.cend(), str);
		if (it == word.cend()){
			word.push_back(str);
		}
	}

	return 0;
}
