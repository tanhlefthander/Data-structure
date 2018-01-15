#pragma once
#include <iostream>
#include <string>
using namespace std;
class SinhVien{
private:
	string ten;
	string msv;
	int diem;
public:
	SinhVien(){};
	SinhVien(const char*name, const char*code,int p){
		ten= name;
		msv= code;
		diem= p;
	};
	int getDiem(){return diem;};
	friend ostream & operator << (ostream &out, SinhVien sv){
		out<<sv.ten<<" "<<sv.msv<<" "<<sv.diem;
		return out;
	};
};
