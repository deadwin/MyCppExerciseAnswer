//ex9.26 ˳�����������鿽����ɾ������
#include<vector>
#include<string>
#include<iostream>
#include<deque>
#include<list>
using namespace std;
//����
void cp(const int *a,const int n, vector<int>&vec, list<int>&lst)
{
	for (int i = 0; i <n; i++)
	{
		vec.push_back(a[i]);
		lst.push_back(a[i]);
	}
}
//ɾ��
void del(list<int>&lst, vector<int>&vec)
{
	auto bg = lst.begin();
	auto vbg = vec.begin();
	while (bg != lst.end())
	{
		if (*bg % 2 == 1 && *bg >= 0)//�˴�д����������ż
		{
			bg = lst.erase(bg);
		}
		else
			bg++;
	}
	while (vbg != vec.end())
	{
		if (*vbg % 2 == 0 && *vbg >= 0)//ͬ�ϣ�����>=0
		{
			vbg=vec.erase(vbg);
		}
		else{
			vbg++;
		}
	}
}
int main()
{
	int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
	vector<int>vec;
	list<int>lst;
	int i = (int)sizeof(ia) / (int)sizeof(int);
	cp(ia,i, vec, lst);  //����
	del(lst, vec);  //ɾ��
	return 0;
}