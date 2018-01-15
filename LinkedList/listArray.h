#pragma once
#include <iostream>
using namespace std; 
#define listItemType int
const int maxItem = 100;
class list{
private:
	listItemType items[maxItem];
	int size;
public:
	list(){
		size = 0;
	};
	void addLast( listItemType newItem ){
		if(size < maxItem ){
			items[size] = newItem;
			size++;
		}
	};
	void insert( int index, listItemType newItem ){
		if(index > size ) return;
		if(size == maxItem ) return; 		
		if(index == size ) addLast( newItem);
		else{
			for(int i= size ; i>= index; i--)
				items[i]= items[i-1];	
			items[index] = newItem;
			size++;
		}
	};
	void delteleItem ( int index){
		if( index > size ) return;
		for(int i= index ; i< size; i++)
			items[i]= items[i+1];
		size--;
	};
	bool isEmpty(){
		return ( size == 0 );
	};
	listItemType retrive( int index ){
		return items[index];
	};
	friend ostream & operator << ( ostream& out, list l){
		for(int i=0 ; i< l.size; i++){
			out<<l.items[i]<<" ";
		}
		out<< endl;
		return out;
	}
};
