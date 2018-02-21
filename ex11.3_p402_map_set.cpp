//ex11.3 ��д���Լ��ĵ��ʼ�������

#include<map>
#include<iostream>
#include<string>
#include<set>
using namespace std;
int main()
{
	map<string, size_t>word_count;
	set<string>exclude = { "the", "but", "and" };
	string word;
	while (cin >> word)
	{
		if (exclude.find(word) == exclude.end())
		++word_count[word];
	}
	for (const auto&w : word_count)
	{
		cout << w.first << "  occurs" << w.second << ((w.second > 1) ? "  times" : "  time") << endl;
	}
	return 0;
}