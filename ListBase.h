#pragma once
#include <iostream>
#include "ListTest.h"
using std::cout;
using std::cin;
using std::endl;
template<class Elem>
class ListBase
{
public:
	virtual void clear() = 0;
	virtual bool insert(const Elem&) = 0;
	virtual bool append(const Elem&) = 0;
	virtual bool remove(Elem&) = 0;
	virtual void setStart() = 0;
	virtual void setEnd() = 0;
	virtual void prev() = 0;
	virtual void next() = 0;
	virtual int leftLength() = 0;
	virtual int rightLength() = 0;
	virtual bool setPos() = 0;
	virtual bool getValue(	 Elem&) const = 0;
	virtual void print()const = 0;
protected:
private:
};


