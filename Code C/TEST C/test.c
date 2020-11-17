//viet chuong trinh Input/Output first name, last name voi gets
#include<stdio.h>
#include<conio.h>

int main() {
	char first[20];
	char last[20];
	printf("Nhap first name:");
	gets(first);
	fflush(stdin);
	printf("Nhap last name:");
	gets(last);
	printf("Name: %.5s %s",first,last);//su dung %.10s de gioi han so ky tu cua 1 string khi output
	return 0;
}
