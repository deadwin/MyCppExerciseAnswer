//ex9.15  �ж�2��vector<int>�Ƿ����
//ex9.16 �Ƚ�list<int>��vect<int>�е�Ԫ��

//ע��*end()��ȡֵ���壡
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
		bool a = true;    //v2С��v1�����ʼ��a��
	}
	list<int>lsc;
	lsc.push_back(3);
	lsc.push_back(5);

	vector<int>veclist;
	veclist.assign(lsc.begin(), lsc.end());
	if (ivec2 != veclist)           
	{
		bool b = true;           //�˴������ܵõ�Ԥ�ڽ��
	}
	
	bool c = comp(ivec1, lsc);
	return 0;
}