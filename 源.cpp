//#include<iostream>
//#include<deque>
//#include<string>
//#include<time.h>
//#include<set>
//#include<map>
//#include"z.h"
//using namespace std;
////炉石分解    5-20-100-400   50-100-400-1600
//double canshu(const int&n){
//	double x = (70 * 5 + 21.4 * 20 + 4.28 * 100 + 1.08 * 400 +
//		1.47 * 50 + 1.37 * 100 + 0.308 * 400 + 0.111 * 1600) * 5 / 100.0f*n;
//	return x;
//}
//
//void sw(const unsigned&k){
//
//	switch (k){
//	case 1:
//		cout << "白卡" << endl;
//		bianliang = rand() % BAIKA;
//		if (!bst_a.count(bianliang)){  //如果没有，则插入
//			bst_a.insert(bianliang);
//
//			sum1++;
//		}
//		else bchen += 5;             //否则，折算尘 ,注意可以算出来多余白卡的张数
//		break;
//	case 2:
//		cout << "蓝卡" << endl;
//		bianliang = rand() % LANKA;
//		if (!lst_a.count(bianliang)){
//			lst_a.insert(bianliang);
//			sum2++;
//		}
//		else lchen += 20;
//		break;
//	case 3:
//		cout << "紫卡" << endl;
//		bianliang = rand() % ZIKA;
//		if (!zst_a.count(bianliang)){
//			zst_a.insert(bianliang);
//			sum3++;
//		}
//		else zchen += 100;
//		break;
//	case 4:
//		cout << "橙卡!!!!" << endl;
//		bianliang = rand() % CHENGKA;
//		if (!cst_a.count(bianliang)){
//			cst_a.insert(bianliang);
//			sum4++;
//		}
//		else cchen += 400;
//		break;
//	case 5:
//		cout << "金白!" << endl;
//		bianliang = rand() % BAIKA;
//		if (!jbst_a.count(bianliang)){  //如果没有，则插入
//			jbst_a.insert(bianliang);
//			sum1++;
//		}
//		else jchen += 50;
//		break;
//	case 6:
//		cout << "金蓝!" << endl;
//		bianliang = rand() % LANKA;
//		if (!jlst_a.count(bianliang)){  //如果没有，则插入
//			jlst_a.insert(bianliang);
//			sum2++;
//		}
//		else jchen += 100;
//		break;
//	case 7:
//		cout << "金紫!" << endl;
//		bianliang = rand() % ZIKA;
//		if (!jzst_a.count(bianliang)){  //如果没有，则插入
//			jzst_a.insert(bianliang);
//			sum3++;
//		}
//		else jchen += 400;
//		break;
//	case 8:
//		cout << "金橙!!!!!" << endl;
//		bianliang = rand() % CHENGKA;
//		if (!jcst_a.count(bianliang)){  //如果没有，则插入
//			jcst_a.insert(bianliang);
//			sum4++;
//		}
//		else jchen += 1600;
//		break;
//	}
//}
//void panduan(unsigned num){
//	kabie k;
//	if (num < 7000){
//		k = baika;
//	}
//	else if (num < 9140){
//		k = lanka;
//	}
//	else if (num < 9568){
//		k = zika;
//	}
//	else if (num < 9676){
//		k = chengka;
//	}
//	else if (num < 9823){
//		k = jb;
//	}
//	else if (num < 9960){
//		k = jl;
//	}
//	else if (num < 9990){
//		k = jz;
//	}
//	else k = jc;
//	sw(k);
//}
//void suiji(const int& n){
//	int card = 5 * n;
//	srand(time(NULL));
//	while (card > 0){
//		unsigned r = rand()%10001;
//		panduan(r);
//		card--;
//	}
//}
//int main(){ 
//	int n;
//	cout << "输入卡包数(包):" << endl;
//	cin >> n;
//	suiji(n);
//	cout << "共计:" << endl;
//	cout << "白卡: " << sum1 << endl;
//	cout << "蓝卡: " << sum2 << endl;
//	cout << "紫卡: " << sum3 << endl;
//	cout << "橙卡: " << sum4 << endl;
//	//      cout << "可开出"<<canshu(n) <<"尘"<< endl;
//	return 0;
//}