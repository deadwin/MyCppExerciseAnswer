//map的用法，包括，插入key-value，根据key删除，根据value删除、修改
//注意map不支持修改key值
#include<vector>
#include<map>
#include<string>
using namespace std;

struct itemstruct{
	int a;
	char b[20];
};
int main(){
	map<string, itemstruct>itemmap;
	itemstruct item[5] = { { 1, "zz" }, { 3, "ni" },
	{ 7, "zhid" }, { 15, "nd" }, { 10, "fuck" } };
	string str[5] = { "aaa", "aac", "bbb","ccc","ddd" };
	for (int i = 0; i <5 ; i++){
		itemmap.insert(make_pair(str[i], item[i]));
	}
	//根据key删除
	map<string, itemstruct>::iterator it;
	for (it = itemmap.begin(); it != itemmap.end(); it++){
		if (it->first > "dda"){
			it=itemmap.erase(it);        //①先保存迭代器地址
			it--;   //一定要自减           
		}
	}
	//根据value的某项属性删除
	for (it = itemmap.begin(); it != itemmap.end(); it++){
		if (it->second.a > 14){
			itemmap.erase(it--);     //等价于①--  
		}
	}
	//修改value的某项属性
	for (it = itemmap.begin(); it != itemmap.end(); it++){
		if (it->second.a >= 7){
			it->second.a = 20;
		}
	}


	map<int, string>imap;//声明了一个key-int,value-string的底层map
	imap.insert(make_pair(3, "zz"));
	imap.insert(make_pair(4, "zz"));
	imap.insert(make_pair(5, "zz"));
	imap.insert(make_pair(6, "zz"));

	map<int, map<int, string>>dmap;  //双重map
	for (int i = 0; i != 5; i++){
		dmap[i].insert(make_pair(i, "wond"));
	}
	for (auto it = imap.begin(); it != imap.end(); it++){ //通过对底层map的迭代器操作,将底层imap添加进了顶层dmap
		dmap[5].insert(make_pair(it->first,it->second));
	}
	auto itt = dmap.begin();  //注意可以通过迭代器来对map进行操作
	if (itt->first==0){   //当dmap的头key==0时
		dmap.erase(itt);   //此项删除了该迭代器，同理对于双重map，可以通过双重迭代器来对底层map进行操作
	}
		return 0;
}