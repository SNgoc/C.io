// Code mau pointer
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main() 
{
	int a,b;
	int *ptr; //ptr la bien con tro ma tro den 1 bien co kieu du lieu int
	printf("Enter a value of a: ");
	scanf("%d",&a);
	ptr = &a; // phai khai bao ngay khi nhap a, de tranh bi hong du lieu he thong
	b = *ptr;
	printf("\nThe vaue of a is %d",a);
	printf("\nThe value of b is %d\n",b);
	printf("\nThe value of ptr (pointer) is %x", ptr); // hien thi dia chi cua gia tri
	
}
