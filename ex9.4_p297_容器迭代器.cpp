//ex9.4 ��д����������һ��ָ��vector<int>�ĵ�������һ��intֵ���������������ƶ��ķ�Χ�в��Ҹ�����ֵ������һ������ֵ��ָ���Ƿ��ҵ���
#include<iostream>
#include<vector>
using namespace std;

bool test(vector<int>::iterator vbg, vector<int>::iterator vend, int n){
	while (vbg != vend){
		if (*vbg == n){
			return true;
		}
		vbg++;
	}
	return false;
}
int main(){
	vector<int>ivec;
	for (int i = 0; i != 100; i += 2){
		ivec.push_back(i);
	}
	bool a = test(ivec.begin()+2, ivec.end(), 6);
	return 0;
}