//ex9.15  判断2个vector<int>是否相等
//ex9.16 比较list<int>和vect<int>中的元素

//注意*end()的取值陷阱！
#include<array>
#include<vector>
#include<list>
#include<iostream>
using namespace std;
bool comp(const vector<int>&ivec,  list<int>&ls)
{
	if (ivec.size() > ls.size())
	{
		return true;
	}
	else if (ivec.size() == ls.size())
	{
		auto bg = ivec.begin();
	    auto bgls = ls.begin();
		for (; bg != ivec.end(); bg++, bgls++)
		{
			if (*bg == *bgls)
			{
				return true;
			}
		}
		if (ivec.begin() == ivec.end())
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	else
	{
		return false;
	}
}
int main()
{
	vector<int>ivec1;
	ivec1.push_back(3);
	ivec1.push_back(5);
	
	vector<int>ivec2;
	ivec2.push_back(5);
	ivec2.push_back(3);
	if (ivec2 > ivec1)
	{
		bool a = true;    //v2小于v1，则初始化a。
	}
	list<int>lsc;
	lsc.push_back(3);
	lsc.push_back(5);

	vector<int>veclist;
	veclist.assign(lsc.begin(), lsc.end());
	if (ivec2 != veclist)           
	{
		bool b = true;           //此处并不能得到预期结果
	}
	
	bool c = comp(ivec1, lsc);
	return 0;
}