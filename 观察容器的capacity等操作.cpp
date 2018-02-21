//¹Û²ìÈÝÆ÷µÄ capacity¡¢reserve¡¢shrink_to_fit²Ù×÷
#include<vector>
#include<iostream>
using namespace std;
int main()
{
	vector<int>vi;
	cout << vi.capacity() << endl;
	for (int i = 1; i < 10; i++)
	{
		vi.push_back(i);
	}
	auto iter = vi.begin();
	cout << vi.capacity() << endl;
	while (iter != vi.end())
	{
		if (*iter % 2)
		{
			iter = vi.insert(iter, *iter);
			++iter;
		}
		++iter;
	}
	cout << vi.capacity()<<endl;
	vi.reserve(50);
	vi.reserve(30);
	cout << vi.capacity() << endl;
	vi.shrink_to_fit();
	cout << vi.capacity() << endl;
	return 0;
}