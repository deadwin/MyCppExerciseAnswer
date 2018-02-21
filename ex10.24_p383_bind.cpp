//ex10.24 给定一个string，使用bind和isfunc在一个int的vector中查找第一个 大于string长度 的值。
//注意读通题目。
#include<iostream>
#include<string>
#include<fstream>
#include<algorithm>
#include<vector>
#include<functional>
using namespace std;
using namespace std::placeholders;
bool isfunc(const string&s, string::size_type sz){
	return s.size() <= sz;
}
int main(){
	//此处是一个文件读取练习，不管
	ifstream ifs;
	vector<string>svec;
	string str;
	ifs.open("F:\\keshanchu\\111.txt");   //读取一个文件
	if (ifs.is_open()){
		while (!ifs.eof()){
			getline(ifs, str);
			svec.push_back(str);
		}
		ifs.close();
	}

	//下面是答案
	string testString = "h8dfds";  //长度6
	vector<int>ivec{1, 4, 6, 10,15 };   
	auto zhi = find_if(ivec.cbegin(), ivec.cend(),
		bind(isfunc,testString,_1)
		);
	if (zhi != ivec.cend()){
		cout << *zhi << endl;
	}
	else cout << "not found" << endl;
	return 0;
}
