#include"a.h"
string(&func(string(&s)[10]))[10]{
	char n = 'a';
	for (int i = 0; i != 10; i++){
		n++;
		s[i].push_back(n);
	}
	return s;
}
int(*test(int(*arr)[5]))[5]{
	for (int i = 0; i != 5; i++){
		(*arr)[i] *= 2;
	}
	return arr;
}
int main(){
	string s[10] = { "aaa", "aaa", "aaa", "aaa", "bbb", "aaa", "ccc", "aaa", "aaa", "ddd" };
	int arr[5] = { 1, 2, 3, 4, 5 };
	string (&sss)[10]= func(s);
   int (*a)[5]=test(&arr);
	return 0;
}
