//Viet chuong trinh nhap vao mang float va in ra mang co toi da 5 phan tu, in ra %.2f
#include<stdio.h>
#include<conio.h>
int main(){
	float arr[1000];
	int n,i;
	for (i = 1; i <= 5; i++) {
		printf("Nhap arr[%d]: ",i);
		scanf("%f",&arr[i]);
	}
	for (i = 1; i <= 5;i++) {
		printf("arr[%d]: %.2f\t",i,arr[i]);
	}
}

