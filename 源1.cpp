#include<iostream>
#include<deque>
#include<string>
#include<time.h>
#include"z.h"
using namespace std;
//¯ʯ�ֽ�    5-20-100-400   50-100-400-1600
double canshu(const int&n){
	double x = (70 * 5 + 21.4 * 20 + 4.28 * 100 + 1.08 * 400 +
		1.47 * 50 + 1.37 * 100 + 0.308 * 400 + 0.111 * 1600) * 5 / 100.0f*n;
	return x;
}

void sw(const unsigned&k){
	int r;
	switch (k){
	case 1:
		cout << "�׿�" << endl;
		sum1++;
		r = rand() % BAIKA;  //rΪ����id
		if (bmap[r].size() < 2){
			bmap[r].push_back(r);
		}
		else bchen += 5;  //�׳�����������ظ��׿�����
		break;
	case 2:
		cout << "����" << endl;
		sum2++;
		r = rand() % LANKA;
		if (lmap[r].size() < 2){
			lmap[r].push_back(r);
		}
		else lchen += 20;
		break;
	case 3:
		cout << "�Ͽ�" << endl;
		sum3++;
		r = rand() % ZIKA;
		if (zmap[r].size() < 2){
			zmap[r].push_back(r);
		}
		else zchen += 100;
		break;
	case 4:
		cout << "�ȿ�!!!!" << endl;
		sum4++;
		r = rand() % CHENGKA;
		if (cmap[r].size() < 1){
			cmap[r].push_back(r);
		}
		else cchen += 400;
		break;
	case 5:
		cout << "���!" << endl;
			sum1++;
			r = rand() % BAIKA;  //rΪ����id
			if (jbmap[r].size() < 2){
				jbmap[r].push_back(r);
			}
		break;
	case 6:
		cout << "����!" << endl;
			sum2++;
			r = rand() % LANKA;  //rΪ����id
			if (jlmap[r].size() < 2){
				jlmap[r].push_back(r);
			}
		break;
	case 7:
		cout << "����!" << endl;
			sum3++;
			r = rand() % ZIKA;  //rΪ����id
			if (jzmap[r].size() < 2){
				jzmap[r].push_back(r);
			}
		break;
	case 8:
		cout << "���!!!!!" << endl;
			sum4++;
			r = rand() % CHENGKA;  //rΪ����id
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
	sw(k);   //����ɿ���Ʒ��
}
void chushihua(){
	sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;
	 bchen = 0;
	 lchen = 0;
	 zchen = 0;
	 cchen = 0;
	 jchen = 0;
	 sum_chen = 0;//�ܳ�
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
	// ��map�ĵ�[n]�±�
	//n.first���ڿ�id  ,n.second.size()���ڴ˿��м��š���Ϊ2�š���������
for (const auto&n : jbmap){
	 //��ʾ���ſ��ڰ׿������˼����ˡ�
	if (bmap[n.first].size() == 0 || bmap[n.first].size() == 1 || bmap[n.first].size() == 2){
		if ((bmap[n.first].size() + n.second.size())  >= 2){
			jbchen += ((bmap[n.first].size() + n.second.size() - 2) * 50);  //û�д�����������һ��Сʱ�㶨��
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
	cout << "Ĭ��Ϊ������汾����,�Ƿ��޸ģ�    (Y/N)" << endl;;
	char c;
	cin >> c;
	if (c != 'y' && c != 'Y' && c != 'n' && c != 'N'){
		cout << "�������,�����˳�" << endl;
		system("pause");
		exit(0);
	}
	if (c == 'y' || c == 'Y'){
		cout << "��������׿�����:" << endl;;
		cin >> BAIKA;
		cout << "����������������:" << endl;;
		cin >> LANKA;
		cout << "���������Ͽ�������" << endl;;
		cin >> ZIKA;
		cout << "��������ȿ�������" << endl;;
			cin >> CHENGKA;
	}
	cout << "���뿨����(��)(����0ֹͣ):" << endl;
	cin >> n;
	while (n != 0){
		suiji(n);
		houqi();
		cout << "�㿪��" << n << "��" << endl;
		cout << "--����:--" << endl;
		cout << "�׿�: " << sum1 << endl;
		cout << "����: " << sum2 << endl;
		cout << "�Ͽ�: " << sum3 << endl;
		cout << "�ȿ�: " << sum4 << endl;
		cout << "������" << sum_chen << endl;
		cout << "����:�ظ��׿� " << bchen / 5 << "�ţ�" << "�ظ����� " << lchen / 20 << "�ţ�" <<
			 "�ظ��Ͽ� " << zchen / 100 << "�ţ�" <<
			  "�ظ��ȿ� " << cchen / 400 << "�š�" << endl;
		cout << "�Լ�:�ظ���׿� " << jbchen / 50 << "�ţ�" << "�ظ������� " << jlchen / 100 << "�ţ�" <<
			"�ظ����Ͽ� " << jzchen / 400 << "�ţ�" <<
			"�ظ���ȿ� " << jcchen / 1600 << "�š�" << endl;
		cout << "���׿��� " << sum1-bchen/5-jbchen/50 << "�ţ�" << " ���� " <<sum2-lchen/20- jlchen / 100 << "�ţ�" <<
			"�Ͽ� " <<sum3-zchen/100- jzchen / 400 << "�ţ�" <<
			"�ȿ� " <<sum4- cchen/400-jcchen / 1600 << "�š�" << endl;
		int an = (sum1 - bchen / 5 - jbchen / 50) > 98 ? 0 : (BAIKA * 2 - (sum1 - bchen / 5 - jbchen / 50));
		int am = (sum2 - lchen / 20 - jlchen / 100)>LANKA * 2 ? 0 : (LANKA * 2 - (sum2 - lchen / 20 - jlchen / 100));
		int ay = (sum3 - zchen / 100 - jzchen / 400) > ZIKA * 2 ? 0 : (ZIKA * 2 - (sum3 - zchen / 100 - jzchen / 400));
		int az = (sum4 - cchen / 400 - jcchen / 1600) > CHENGKA ? 0 : (CHENGKA - (sum4 - cchen / 400 - jcchen / 1600));
		cout << "ȱ�׿��� " <<  an<< "�ţ� " <<
			"���� " << am << "�ţ��Ͽ�" <<ay<< "�ţ��ȿ�" <<
			az << "�š�" << endl;
		cout << "----------------------------" << endl;
		cout << "���뿨����(��)(����0ֹͣ):" << endl;
		cin >> n;
	}
	system("pause");
	return 0;
}