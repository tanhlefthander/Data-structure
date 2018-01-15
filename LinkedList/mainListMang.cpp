#include <iostream>
#include "listMang.h"
using namespace std;
int main(){
	list ds;
	ds.addLast(7);
	ds.addLast(8);
	ds.addLast(3);
	cout<<ds;
	ds.insert(2, 10);
	cout<<ds;
	ds.delteleItem(2);
	cout<<ds;
	cout<<ds.retrive(2)<<endl;
	return 0;
}
