//viet chuong trinh tinh luong
#include<stdio.h>
#include<conio.h>

int main() {
	int basic,daper;
	float bonper,loan;
	char name[20];
	printf("Nhap basic daper:");
	scanf("%d %d",&basic,&daper);
	printf("\nNhap bonper,loan:");
	scanf("%f %f",&bonper,&loan);
	fflush(stdin);
	printf("\nNhap ten:");
	scanf("%s",name);
	float salary = basic + (basic*daper/100) + (bonper*basic/100) - loan;
	printf("\nname \t basic \t daper \t bonper \t loandet \t Salary");
	printf("\n%s \t %d \t %d \t %f \t %f \t %f",name,basic,daper,bonper,loan,salary);
	getch();
	return 0;
}
