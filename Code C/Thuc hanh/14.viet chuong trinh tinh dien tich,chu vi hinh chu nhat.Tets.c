// viet chuong trinh tinh chu vi, dien tich hinh chu nhat voi canh a,b nhap tu ban phim
#include<stdio.h>
#include<conio.h>

int main() {
	float a,b;
	printf("Input canh a,b:");
	scanf("%f %f",&a,&b);
	float S,P;
	S = a*b;
	P = (a+b)*2;
	printf("\nS:%20.2f",S);//
	printf("\nP:%.2f",P);
	return 0;
}
