//#include<iostream>
//#include<deque>
//#include<string>
//#include<time.h>
//#include<set>
//#include<map>
//#include"z.h"
//using namespace std;
////¯ʯ�ֽ�    5-20-100-400   50-100-400-1600
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
//		cout << "�׿�" << endl;
//		bianliang = rand() % BAIKA;
//		if (!bst_a.count(bianliang)){  //���û�У������
//			bst_a.insert(bianliang);
//
//			sum1++;
//		}
//		else bchen += 5;             //�������㳾 ,ע��������������׿�������
//		break;
//	case 2:
//		cout << "����" << endl;
//		bianliang = rand() % LANKA;
//		if (!lst_a.count(bianliang)){
//			lst_a.insert(bianliang);
//			sum2++;
//		}
//		else lchen += 20;
//		break;
//	case 3:
//		cout << "�Ͽ�" << endl;
//		bianliang = rand() % ZIKA;
//		if (!zst_a.count(bianliang)){
//			zst_a.insert(bianliang);
//			sum3++;
//		}
//		else zchen += 100;
//		break;
//	case 4:
//		cout << "�ȿ�!!!!" << endl;
//		bianliang = rand() % CHENGKA;
//		if (!cst_a.count(bianliang)){
//			cst_a.insert(bianliang);
//			sum4++;
//		}
//		else cchen += 400;
//		break;
//	case 5:
//		cout << "���!" << endl;
//		bianliang = rand() % BAIKA;
//		if (!jbst_a.count(bianliang)){  //���û�У������
//			jbst_a.insert(bianliang);
//			sum1++;
//		}
//		else jchen += 50;
//		break;
//	case 6:
//		cout << "����!" << endl;
//		bianliang = rand() % LANKA;
//		if (!jlst_a.count(bianliang)){  //���û�У������
//			jlst_a.insert(bianliang);
//			sum2++;
//		}
//		else jchen += 100;
//		break;
//	case 7:
//		cout << "����!" << endl;
//		bianliang = rand() % ZIKA;
//		if (!jzst_a.count(bianliang)){  //���û�У������
//			jzst_a.insert(bianliang);
//			sum3++;
//		}
//		else jchen += 400;
//		break;
//	case 8:
//		cout << "���!!!!!" << endl;
//		bianliang = rand() % CHENGKA;
//		if (!jcst_a.count(bianliang)){  //���û�У������
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
//	cout << "���뿨����(��):" << endl;
//	cin >> n;
//	suiji(n);
//	cout << "����:" << endl;
//	cout << "�׿�: " << sum1 << endl;
//	cout << "����: " << sum2 << endl;
//	cout << "�Ͽ�: " << sum3 << endl;
//	cout << "�ȿ�: " << sum4 << endl;
//	//      cout << "�ɿ���"<<canshu(n) <<"��"<< endl;
//	return 0;
//}