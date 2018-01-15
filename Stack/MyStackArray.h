#pragma once
#include <iostream>
using namespace std;
const int MAX = 1000;
template <class T>
class MyStackArray{
private:
	T A[MAX];
	int sz;
public:
	MyStackArray(){
		sz=0;
	};
	void Push(T s){
		if(sz == MAX ) return;
		A[sz] = s;
		sz++;
	}
	void Pop(){
		sz--;
	}
	void Pop( T &s){
		s= A[sz-1];
		sz--;
	}
	T Top(){return A[sz-1];}
	bool IsEmpty(){
		if(sz!=0) return false;
		return true;
	}
};
