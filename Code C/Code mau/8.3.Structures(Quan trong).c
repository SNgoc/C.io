// Code mau Structures
#include<stdio.h>
#include<conio.h>
int main()
{
	struct ngaysinh {
		int ngay;
		int thang;
		int nam;
	};
	struct hocsinh {
		char name[10];
		struct ngaysinh dob;//dob la bien cua kieu cau truc ngay sinh, co du cau truc ngay sinh
		float diem;
	}hs1;
	printf("\nInput information of hs1\n");
	printf("Enter a name: ");
	scanf("%s",hs1.name);
	printf("\nEnter a day of dob:");
	scanf("%d",&hs1.dob.ngay);
	printf("\nEnter a month of dob: ");
	scanf("%d",&hs1.dob.thang);
	printf("\nEnter an year of dob: ");
	scanf("%d",&hs1.dob.nam);
	printf("\nEnter a mark: ");
	scanf("%f",&hs1.diem);
	printf("\nInformation of hoc sinh 1\n");
	printf("Name: %s",hs1.name);
	printf("\nDate of birth: %d/%d/%d",hs1.dob.ngay, hs1.dob.thang, hs1.dob.nam);
	printf("\nMark: %.2f\n",hs1.diem);
}
