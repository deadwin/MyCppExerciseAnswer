#include<iostream>
using std::cin;
using std::cout;
using std::endl;
typedef struct{
	int index;
	int number;
}StrucValue;

StrucValue ErFenFind(const int *a, const int&size, const int& num){
	StrucValue p;
	int low = 0;
	int high = size - 1;
	int mid = (high + low) / 2;
	while (low < high){
		if (num == a[mid]){
			break;
		}
		else if (a[mid] < num){
			low = mid + 1;
		}
		else{
			high = mid - 1;
		}
		mid = (high + low) / 2;
	}
	if (a[mid] == num){
		p.index = mid;
		p.number = a[mid];
	}
	else{
		p.index = -1;
		p.number = -1;
	}
	return p;
}
template<typename T>
class A{
public:
	int b;
};
//二分查找
void erFenTest(){
	int a[10] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
	int num;
	cin >> num;
	int size = sizeof(a) / sizeof(int);
	StrucValue result = ErFenFind(a, size, num);
	cout << "index:" << result.index << ",value:" << result.number << endl;
}

//递归
int aaa(int a){
	if (a == 1){
		return 1;
	}
	return a+aaa(a - 1);
}
int main(){
	erFenTest(); //二分（折半）查找
	int a = aaa(5);
	cout << a;
	return 0;
}
