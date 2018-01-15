#include <iostream>
#include "MyStack.h"
#include "MyStackArray.h"
using namespace std;
int main(){
	MyStackArray< int > s;
	s.Push(8);
	s.Push(4);
	s.Push(86);
	while(!s.IsEmpty()){
		cout<<s.Top()<<endl;
		s.Pop();
	}
	return 0;
}
