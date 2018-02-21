#include<iostream>
#include<deque>
#include<string>
#include<time.h>
#include"z.h"
using namespace std;
//炉石分解    5-20-100-400   50-100-400-1600
double canshu(const int&n){
	double x = (70 * 5 + 21.4 * 20 + 4.28 * 100 + 1.08 * 400 +
		1.47 * 50 + 1.37 * 100 + 0.308 * 400 + 0.111 * 1600) * 5 / 100.0f*n;
	return x;
}

void sw(const unsigned&k){
	int r;
	switch (k){
	case 1:
		cout << "白卡" << endl;
		sum1++;
		r = rand() % BAIKA;  //r为卡的id
		if (bmap[r].size() < 2){
			bmap[r].push_back(r);
		}
		else bchen += 5;  //白尘数，可算出重复白卡数量
		break;
	case 2:
		cout << "蓝卡" << endl;
		sum2++;
		r = rand() % LANKA;
		if (lmap[r].size() < 2){
			lmap[r].push_back(r);
		}
		else lchen += 20;
		break;
	case 3:
		cout << "紫卡" << endl;
		sum3++;
		r = rand() % ZIKA;
		if (zmap[r].size() < 2){
			zmap[r].push_back(r);
		}
		else zchen += 100;
		break;
	case 4:
		cout << "橙卡!!!!" << endl;
		sum4++;
		r = rand() % CHENGKA;
		if (cmap[r].size() < 1){
			cmap[r].push_back(r);
		}
		else cchen += 400;
		break;
	case 5:
		cout << "金白!" << endl;
			sum1++;
			r = rand() % BAIKA;  //r为卡的id
			if (jbmap[r].size() < 2){
				jbmap[r].push_back(r);
			}
		break;
	case 6:
		cout << "金蓝!" << endl;
			sum2++;
			r = rand() % LANKA;  //r为卡的id
			if (jlmap[r].size() < 2){
				jlmap[r].push_back(r);
			}
		break;
	case 7:
		cout << "金紫!" << endl;
			sum3++;
			r = rand() % ZIKA;  //r为卡的id
			if (jzmap[r].size() < 2){
				jzmap[r].push_back(r);
			}
		break;
	case 8:
		cout << "金橙!!!!!" << endl;
			sum4++;
			r = rand() % CHENGKA;  //r为卡的id
			if (jcmap[r].size() < 1){
				jcmap[r].push_back(r);
			}
		break;
	}
}
void panduan(unsigned num){
	kabie k;
	if (num < 7000){
		k = baika;
	}
	else if (num < 9140){
		k = lanka;
	}
	else if (num < 9568){
		k = zika;
	}
	else if (num < 9676){
		k = chengka;
	}
	else if (num < 9823){
		k = jb;
	}
	else if (num < 9960){
		k = jl;
	}
	else if (num < 9990){
		k = jz;
	}
	else k = jc;
	sw(k);   //换算成卡的品质
}
void chushihua(){
	sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;
	 bchen = 0;
	 lchen = 0;
	 zchen = 0;
	 cchen = 0;
	 jchen = 0;
	 sum_chen = 0;//总尘
	bmap.clear();
	lmap.clear();
	zmap.clear();
	cmap.clear();
	jbmap.clear();
	jlmap.clear();
	jzmap.clear();
	jcmap.clear();
	jbchen = 0;
	 jlchen = 0;
	 jzchen = 0;
	 jcchen = 0;
}
void suiji(const int& n){
	int card = 5 * n;
	chushihua(); 
	srand(time(NULL));
	while (card > 0){
		unsigned r = rand() % 10001;
		panduan(r);
		card--;
	}
}
void houqi(){
	// 对map的第[n]下标
	//n.first等于卡id  ,n.second.size()等于此卡有几张。若为2张。则如何如何
for (const auto&n : jbmap){
	 //表示这张卡在白卡中有了几张了。
	if (bmap[n.first].size() == 0 || bmap[n.first].size() == 1 || bmap[n.first].size() == 2){
		if ((bmap[n.first].size() + n.second.size())  >= 2){
			jbchen += ((bmap[n.first].size() + n.second.size() - 2) * 50);  //没有错！！！！改了一个小时搞定唉
		}
	}
	}
for (const auto&n : jlmap){
	if (lmap[n.first].size() == 0 || lmap[n.first].size() == 1 || lmap[n.first].size() == 2){
		if ((lmap[n.first].size() + n.second.size()) >= 2){
			jlchen += ((lmap[n.first].size() + n.second.size() - 2) * 100);
		}
	}
}
for (const auto&n : jzmap){
	if (zmap[n.first].size() == 0 || zmap[n.first].size() == 1 || zmap[n.first].size() == 2){
		if ((zmap[n.first].size() + n.second.size() )>=2 ){
			jzchen += ((zmap[n.first].size() + n.second.size() - 2) * 400);
		}
	}
}
for (const auto&n : jcmap){
	if (cmap[n.first].size() == 1||cmap[n.first].size()==0){
		jcchen += ((cmap[n.first].size() + n.second.size() - 1) * 1600);
	}
}
sum_chen = bchen + lchen + zchen + cchen + jbchen + jlchen + jzchen + jcchen;
}
int main(){
	int n;
	cout << "默认为安戈洛版本卡牌,是否修改？    (Y/N)" << endl;;
	char c;
	cin >> c;
	if (c != 'y' && c != 'Y' && c != 'n' && c != 'N'){
		cout << "输入错误,程序退出" << endl;
		system("pause");
		exit(0);
	}
	if (c == 'y' || c == 'Y'){
		cout << "重新输入白卡数量:" << endl;;
		cin >> BAIKA;
		cout << "重新输入蓝卡数量:" << endl;;
		cin >> LANKA;
		cout << "重新输入紫卡数量：" << endl;;
		cin >> ZIKA;
		cout << "重新输入橙卡数量：" << endl;;
			cin >> CHENGKA;
	}
	cout << "输入卡包数(包)(输入0停止):" << endl;
	cin >> n;
	while (n != 0){
		suiji(n);
		houqi();
		cout << "你开了" << n << "包" << endl;
		cout << "--共计:--" << endl;
		cout << "白卡: " << sum1 << endl;
		cout << "蓝卡: " << sum2 << endl;
		cout << "紫卡: " << sum3 << endl;
		cout << "橙卡: " << sum4 << endl;
		cout << "返尘：" << sum_chen << endl;
		cout << "其中:重复白卡 " << bchen / 5 << "张，" << "重复蓝卡 " << lchen / 20 << "张，" <<
			 "重复紫卡 " << zchen / 100 << "张，" <<
			  "重复橙卡 " << cchen / 400 << "张。" << endl;
		cout << "以及:重复金白卡 " << jbchen / 50 << "张，" << "重复金蓝卡 " << jlchen / 100 << "张，" <<
			"重复金紫卡 " << jzchen / 400 << "张，" <<
			"重复金橙卡 " << jcchen / 1600 << "张。" << endl;
		cout << "共白卡： " << sum1-bchen/5-jbchen/50 << "张，" << " 蓝卡 " <<sum2-lchen/20- jlchen / 100 << "张，" <<
			"紫卡 " <<sum3-zchen/100- jzchen / 400 << "张，" <<
			"橙卡 " <<sum4- cchen/400-jcchen / 1600 << "张。" << endl;
		int an = (sum1 - bchen / 5 - jbchen / 50) > 98 ? 0 : (BAIKA * 2 - (sum1 - bchen / 5 - jbchen / 50));
		int am = (sum2 - lchen / 20 - jlchen / 100)>LANKA * 2 ? 0 : (LANKA * 2 - (sum2 - lchen / 20 - jlchen / 100));
		int ay = (sum3 - zchen / 100 - jzchen / 400) > ZIKA * 2 ? 0 : (ZIKA * 2 - (sum3 - zchen / 100 - jzchen / 400));
		int az = (sum4 - cchen / 400 - jcchen / 1600) > CHENGKA ? 0 : (CHENGKA - (sum4 - cchen / 400 - jcchen / 1600));
		cout << "缺白卡： " <<  an<< "张， " <<
			"蓝卡 " << am << "张，紫卡" <<ay<< "张，橙卡" <<
			az << "张。" << endl;
		cout << "----------------------------" << endl;
		cout << "输入卡包数(包)(输入0停止):" << endl;
		cin >> n;
	}
	system("pause");
	return 0;
}