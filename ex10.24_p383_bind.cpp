//ex10.24 ����һ��string��ʹ��bind��isfunc��һ��int��vector�в��ҵ�һ�� ����string���� ��ֵ��
//ע���ͨ��Ŀ��
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
	//�˴���һ���ļ���ȡ��ϰ������
	ifstream ifs;
	vector<string>svec;
	string str;
	ifs.open("F:\\keshanchu\\111.txt");   //��ȡһ���ļ�
	if (ifs.is_open()){
		while (!ifs.eof()){
			getline(ifs, str);
			svec.push_back(str);
		}
		ifs.close();
	}

	//�����Ǵ�
	string testString = "h8dfds";  //����6
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
