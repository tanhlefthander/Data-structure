#include <iostream>
#include "MyQueue.h"
using namespace std;
int main(){
	string s("ertrte");
	MyQueue< char > q;
	for(int i=0; i< s.size(); i++){
		q.addQueue(s[i]);
	}
	while(!q.isEmpty()){
		cout<<q.deQueue()<<endl;
	}
	return 0;
}
