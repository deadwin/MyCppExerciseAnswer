//ex9.4 编写函数，接受一对指向vector<int>的迭代器和一个int值。在两个迭代器制定的范围中查找给定的值，返回一个布尔值来指出是否找到。
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