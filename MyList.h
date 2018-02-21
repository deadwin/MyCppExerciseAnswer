#include<iostream>
#include "ListTest.h"
const int DefaultListSize = 0;

template<class Elem>class List{
public:
	virtual void clear() = 0;
	virtual bool insert(const Elem&) = 0;
	virtual bool append(const Elem&) = 0;
	virtual bool remove(Elem&) = 0;
	virtual void setStart() = 0;
	virtual void setEnd() = 0;
	virtual void prev() = 0;
	virtual void next() = 0;
	virtual int leftLength() const = 0;
	virtual int rightLength() const = 0;
	virtual bool setPos(int pos) = 0;
	virtual bool getValue(Elem&)const = 0;
	virtual void print()const = 0;
};
template<typename Elem>
class AList :public List<Elem>{
private:
	int maxSize;					//最大许可长度
	int listSize;					//当前表长
	int fence;						//分界线
	Elem*listArray;
public:
	AList(int size=DefaultListSize){
		maxSize = size;
		listSize = fence = 0; 
		listArray = new Elem[maxSize];
	}
	~AList(){
		delete[]listArray;
	}
	void clear(){
		delete[]listArray;
		listSize = fence = 0;
		listArray = new Elem[maxSize];
	}
	bool insert(const Elem&);
	bool append(const Elem&);
	bool remove(Elem&);
	void setStart(){ fence = 0; }
	void setEnd(){ fence = listSize; }
	void prev(){ if (fence <= listSize)fence++; }
	int leftLength()const{ return fence; }
	int rightLength()const{ return listSize - fence; }
	bool setPos(int pos){
		if ((pos >= 0) && (pos <= listSize))fence = pos;
		return (pos >= 0) && (pos <= listSize);
	}
	bool getValue(Elem&it)const{
		if (rightLength() == 0)return false;
		else{ it = listArray[fence]; return true; }
	}
	void print()const{
		int temp = 0;
		std::cout << "<";
		while (temp < fence)std::cout << listArray[temp++] << " ";
		cout << "| ";
		while (temp < listSize) std::cout << listArray[temp++] << " ";
		cout << ">\n";
	}
	void next();
};

template<typename Elem>
bool AList<Elem>::insert(const Elem&item){
	if (listSize == maxSize) return false;
	for (int i = listSize; i > fence; i--)
		listArray[i] = listArray[i - 1];
	listArray[fence] = item;
	listSize++;
	print();
	return true;
}
template<typename Elem>
bool AList<typename Elem>::append(const Elem&item){
	if (listSize == maxSize)return false;
	listArray[listSize++] = item;
	this->print();
	return true;
}
template<typename Elem>
bool AList<Elem>::remove(Elem&item){
	if (rightLength() == 0) return false;
	item = listArray[fence];
	for (int i = fence; i < listSize - 1; i++)
		listArray[i] = listArray[i + 1];
	listSize--;
	return true;
}
template<typename Elem>
void AList<typename Elem>::next(){

}