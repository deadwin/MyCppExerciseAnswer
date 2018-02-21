#pragma once

#include "ListBase.h"
template<class Elem>
class ListTest :public ListBase<Elem>{
private:
	int maxSize;
	int fence;
	int listSize;
	Elem*listArray;	
};

