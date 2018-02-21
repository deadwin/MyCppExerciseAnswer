#include<stack>//栈容器的头文件
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

int main(){
	int i = 40;
	auto fa = [i]()mutable
	->bool{
		while (i != 0){ i--; };
		if (i == 0)return false;
	};
	bool b = fa();
	return 0;
}