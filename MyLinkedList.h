#pragma once
#include <iostream>
using namespace std;
template <class T>

struct Node 
{
	T val; 
	Node<T> *next; 
};

template <class T>
class LinkedList {
private:
	Node<T> *first; 
        Node<T> *last;
	int size;
	Node< T >* find(int id) const{
		int i=0;
		Node< T > *prev = first;		
		while(i < id ){
			prev = prev->next;
			i++;
		}
		return prev;
	}	
public:
	LinkedList(){
		first= NULL;
		last= NULL;
		size =0;
	};
	~LinkedList(){
	};
	void InsertAtBack(T value){
		Node<T> *newNode = new Node<T>;
		newNode->val = value;
		newNode->next= NULL;
		if(size== 0){
			first = last = newNode;
		}else{
			last->next = newNode;
			last= newNode;
		}
		size++;
		
	};
	void InsertAtFront(T value){
		Node<T> *newNode = new Node<T>;
		newNode->val = value;
		if(first == NULL ) first= last= newNode;
		else {
			newNode->next= first;
			first= newNode;
		}
		size++;
	};
	bool Insert (int id, T value){
		if(id >= size ) return false;
		Node<T>* prev = find(id-1);
		Node< T > *newNode = new Node<T>;
		newNode->val = value;
		newNode->next = prev->next;
		prev->next = newNode;
		size++;
		return true;
	}
	bool DeleteFromBack(){
		if(size == 0) return false;
		if(first == last){
			first = last = NULL;
			delete first;
			delete last;
		}
		Node<T>* prev = first;
		while(prev->next->next != NULL ){
			prev = prev->next;
		}
		last = prev;
		last->next= NULL;
		prev= prev->next;
		delete prev;
		size--;
		return true;
	}
	bool DeleteFromFront(){
		if(size == 0) return false;
		if(first == last){
			first = last = NULL;
			delete first;
			delete last;
		}
		size--;
		Node<T>* prev = first-> next;
		first= NULL;
		delete first;
		first= prev;
		return true;
		
	}
	int Lenght(){return size;};
	bool Delete(int id){
		if( id >= size ) return false;
		Node<T>* prev = find(id-1);
		Node<T>* cur = prev-> next;
		prev->next = cur->next;
		cur= NULL;
		delete cur;
		size--;
		return true;
	}
	T operator [](int id){
		Node<T>* prev;
		if( id < size )
			prev = find(id);
		return prev->val;
	}
	void print(){
		Node<T>* temp = first;
		if (temp == NULL)
			cout<<"";
		if (temp->next == NULL)
			cout<<temp->val;
		else {
			while (temp != NULL)
			{
				cout<< temp->val;
				temp = temp->next;
				if(temp != NULL) cout<< ",";
			}
		}
	};
};
