//map���÷�������������key-value������keyɾ��������valueɾ�����޸�
//ע��map��֧���޸�keyֵ
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
	//����keyɾ��
	map<string, itemstruct>::iterator it;
	for (it = itemmap.begin(); it != itemmap.end(); it++){
		if (it->first > "dda"){
			it=itemmap.erase(it);        //���ȱ����������ַ
			it--;   //һ��Ҫ�Լ�           
		}
	}
	//����value��ĳ������ɾ��
	for (it = itemmap.begin(); it != itemmap.end(); it++){
		if (it->second.a > 14){
			itemmap.erase(it--);     //�ȼ��ڢ�--  
		}
	}
	//�޸�value��ĳ������
	for (it = itemmap.begin(); it != itemmap.end(); it++){
		if (it->second.a >= 7){
			it->second.a = 20;
		}
	}


	map<int, string>imap;//������һ��key-int,value-string�ĵײ�map
	imap.insert(make_pair(3, "zz"));
	imap.insert(make_pair(4, "zz"));
	imap.insert(make_pair(5, "zz"));
	imap.insert(make_pair(6, "zz"));

	map<int, map<int, string>>dmap;  //˫��map
	for (int i = 0; i != 5; i++){
		dmap[i].insert(make_pair(i, "wond"));
	}
	for (auto it = imap.begin(); it != imap.end(); it++){ //ͨ���Եײ�map�ĵ���������,���ײ�imap��ӽ��˶���dmap
		dmap[5].insert(make_pair(it->first,it->second));
	}
	auto itt = dmap.begin();  //ע�����ͨ������������map���в���
	if (itt->first==0){   //��dmap��ͷkey==0ʱ
		dmap.erase(itt);   //����ɾ���˸õ�������ͬ�����˫��map������ͨ��˫�ص��������Եײ�map���в���
	}
		return 0;
}