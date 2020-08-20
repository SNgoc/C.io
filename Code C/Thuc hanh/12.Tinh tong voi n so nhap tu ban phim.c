// viet chuong trinh tinh tong so nguyen tu 1 den n voi n nhap tu ban phim
// Sn = 1+2+...+n voi n nhap tu ban phim
#include<stdio.h>
#include<conio.h>//lenh tinh toan

int main() {
	int n,sum;
	sum = 0;
	printf("Input n:");
	scanf("%d",&n);
	int i;//bien dem
	for (i = 1; i<= n;i++) //i++ la lenh tang bien dem len 1
	{
		sum = sum +i;
	}
	printf("Tong tu 1 den %d = %d",n,sum);
	getch();//lenh stop man hinh khi xuat result
	return 0;
}
