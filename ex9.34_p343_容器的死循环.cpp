//ex9.34 不要让容器进入死循环
#include<vector>
using namespace std;
int main()
{
	vector<int>vi;
	for (int i = 1; i < 10; i++)
	{
		vi.push_back(i);
	}
	auto iter = vi.begin();
	while (iter != vi.end())
	{
		if (*iter % 2)
		{
			iter = vi.insert(iter, *iter);
			++iter;
		}
		++iter;
	}
     return 0;
}