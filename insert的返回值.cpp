//insertµÄ·µ»ØÖµ
#include<list>
#include<string>
#include<iostream>
using namespace std;
int main()
{
	list<string> ls;
	string word;
	auto bg = ls.begin();
	while (cin >> word)
	{
		bg = ls.insert(bg, word);
	}
	return 0;
}