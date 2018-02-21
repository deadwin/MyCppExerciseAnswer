const int defaultSize = 0;
template<class Elem>class Link{
public:
	Elem element;
	Link*next;
	Link(const Elem&elemval, Link*nextval = NULL){
		element = elemval;
		next = nextval;
	}
	Link(Link*nextval = NULL){
		next = nextval;
	}
};
template<class Elem>class LList :public List<Elem>{
private:
	Link<Elem>*head;
	Link<Elem>*tail;
	Link<Elem>*fence;
	int leftcnt;
	int rightcnt;
	void init(){
		fence = tail = head = new Link<Elem>;
		leftcnt = rightcnt = 0;
	}
	void removeall(){
		while (head!=NULL)
		{
			fence = head;
			head = head->next;
			delete fence;
		}
	}
public:
	LList(int size = defaultSize){
		init();
	}
	~LList(){
		removeall();
	}
	void clear(){ removeall(); init(); }
	bool insert(const Elem&);
	bool append(const Elem&);
	bool remove(Elem&);
	void setStart(){
		fence = head; rightcnt += leftcnt; leftcnt = 0;
	}
	void setEnd(){
		fence = tail; leftcnt += rightcnt; rightcnt = 0;
	}
	void prev();
	void next(){
		if (fence != tail){
			fence = fence->next;
			rightcnt--;
			leftcnt++;
		}
	}
	int leftLength()const{
		return leftcnt;
	}
	int rightLength()const{
		return rightcnt;
	}
	bool setPos(int pos);
	bool getValue(Elem&it)const{
		if (rightLength() == 0)return false;
		it = fence->next->element;
		return true;
	}
	void print() const;
};
template<class Elem>
bool LList<Elem>::insert(const Elem&item){
	fence->next = new Link<Elem>(item, fence->next);
	if (tail == fence)
		tail = fence->next;
	rightcnt++;
	//this->print();
	return true;
}


template<class Elem>
bool LList<Elem>::append(const Elem&item){
	//tail = tail->next
	return true;
}
template<class Elem>
bool LList<Elem>::remove(Elem&it){
	return true;
}
template<class Elem>
void LList<Elem>::prev(){

}
template<class Elem>
bool LList<Elem>::setPos(int pos){
	return true;
}
template<class Elem>
void LList<Elem>::print()const{
	Link<Elem>*temp = head;
	cout << "<";
	while (temp != fence){
		cout << temp->next->element << " ";
		temp = temp->next;
	}
	cout << "| ";
	while (temp->next!=NULL)
	{
		cout << temp->next->element << " ";
		temp = temp->next;
	}
	cout << ">\n";
}