// viet chuong trinh tim tong cua tat ca 2 so le giua 2 so nhap vao
#include<stdio.h>
#include<conio.h>
 int main() {
 	int a,b,i;
 	printf("Nhap 2 so a,b:");
 	scanf("%d %d",&a,&b);
 	int sum = 0;
 	for (i = a; i <= b; i++) {
 		if (i % 2 != 0) {
 			sum = sum + i;
		} 
	}
	printf("Tong cac so le tu %d den %d la: %d",a,b,sum);
 }
