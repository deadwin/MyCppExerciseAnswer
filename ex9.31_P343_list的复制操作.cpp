//ex9.31 顺序容器、数组拷贝、复制容器的奇数项

//没有froward_list的练习
#include<vector>
#include<string>
#include<iostream>
#include<deque>
#include<list>
using namespace std;
//拷贝
void cp(const int *a, const int n, vector<int>&vec, list<int>&lst)
{
	for (int i = 0; i <n; i++)
	{
		vec.push_back(a[i]);
		lst.push_back(a[i]);
	}
}
//删除
void del(list<int>&lst, vector<int>&vec)
{
	auto bg = lst.begin();
	auto vbg = vec.begin();
	while (bg != lst.end())
	{
		if (*bg % 2 == 1 )   //保留lst中偶数
		{
			bg = lst.erase(bg);
		}
		else if (*bg % 2 == 0)  //注意此循环，list容易不能+1,只能++
		{
			bg = lst.insert(bg, *bg);
			bg++;
			bg++;
		}
	}

	while (vbg != vec.end())
	{
		if (*vbg % 2 == 0 )//保留vec中的奇数
		{
			vbg = vec.erase(vbg);
		}
		else if (*vbg%2 ==1)
		{
			vbg = vec.insert(vbg, *vbg);
			vbg += 2;
		}
	}
}
int main()
{
	int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
	vector<int>vec;
	list<int>lst;
	int i = (int)sizeof(ia) / (int)sizeof(int);
	cp(ia, i, vec, lst);  //拷贝
	del(lst, vec);  //删除
	return 0;
}