//�ο�http://blog.csdn.net/wangshubo1989/article/details/49622871
//C++����֮initializer_list
#include<iostream>
#include<initializer_list>//���Բ���
#include<vector>
using namespace std;
class iniTest{
public:
	iniTest(const initializer_list<int>&li){
		for (auto m : li){
			ivec.push_back(m);
		}
	}
	void print(){
		for (auto input : ivec){
			cout << input << endl;
		}
	}
private:
	vector<int>ivec;
};
int main(){
	iniTest test{ 3, 4, 5, 6 };
	test.print();
	return 0;
}
