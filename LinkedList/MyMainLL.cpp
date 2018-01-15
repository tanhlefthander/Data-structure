#include <iostream>
#include "MyLinkedList.h"
#include "SinhVien.h"
using namespace std;
int main(){
	LinkedList< SinhVien > l;
	l.InsertAtBack(SinhVien("TUANH","A1",6));
	l.InsertAtBack(SinhVien("TUNG","A2",8));
	l.InsertAtBack(SinhVien("PHAP","A3",9));
	l.InsertAtFront(SinhVien("SINH","A4",10));
	l.Insert(3,SinhVien("QUAN","A5",4));
	
	l.print();
	cout<<endl;
	int sum=0;
	for(int i=0; i< l.Lenght(); i++){
		sum+= 	l[i].getDiem();
	}
	cout<<sum/l.Lenght()<<endl;
	/*cout<<l[3]<<endl;
	cout<<l.Lenght()<<endl;
	l.Insert(3,SinhVien("QUAN","A5",4));
	l.print();
	cout<<endl;
	l.Delete(2);
	l.print();
	cout<<endl;
	l.DeleteFromBack();
	l.print();
	cout<<endl;
	l.DeleteFromFront();
	l.DeleteFromFront();
	l.print();
	cout<<endl;*/
	return 0;
}
