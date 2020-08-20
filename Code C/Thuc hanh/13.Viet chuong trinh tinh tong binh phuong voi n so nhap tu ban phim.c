// viet chuong trinh tinh tong binh phuong so nguyen tu 1 den n voi n nhap tu ban phim
// Sn = 1+2+...+n voi n nhap tu ban phim
#include<stdio.h>
#include<conio.h>//xu ly tren giao dien

int main() {
	int i,n, sum;
	sum = 0;
	printf("Input n:");
	scanf("%d",&n);
	for (i = 1; i<= n;i++)//i++ la lenh tang bien dem len 1
	{
		int x;
		x = i*i;
		sum = sum + x;
	}
	printf("Tong binh phuong tu 1 den %d = %d",n,sum);
	return 0;
}
