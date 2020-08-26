//Structures (cau truc)

#include<stdio.h>
#include<conio.h>
int main() {
	// Cac cach khai bao cau truc
	//Cach 1
	struct student { //khai bao 1 cau truc
		char rollNo[10];
		char name[10];
		char subject[10];
		int mark;
	};
	struct student stud1, stud2; // khai bao bien stud1,std2 => moi stud1,stud2 co day du cac gia tri khai bao trong struct student truoc do
	
	struct employee {//Cach 2
		int maNV;
		char name[10];
		char dob[8];
		double salary;
	} emp1;
	struct ngaysinh {
		int ngay;
		int thang;
		int nam;
	};
	struct hocsinh {
		char ten[10];
		struct ngaysinh dob;
		char diachi[50];
	}hs1, hs2;
}
