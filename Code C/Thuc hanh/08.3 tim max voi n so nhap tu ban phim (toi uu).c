// viet chuong trinh tim max cua n so bat ky voi n nhap tu ban phim
#include<stdio.h>
#include<conio.h>

int main() {
	int a[100];
	int n,i;
	printf("Nhap so phan tu n:");
	scanf("%d",&n);
	for (i = 1; i <= n; i++) {
		printf("\nNhap phan tu a[%d]:",i);
		scanf("%d",&a[i]);
	}
	int max,min;
	max = a[1];
	min = a[1];
	for (i = 1; i <= n; i++) {
		if (max < a[i]) {
			max = a[i];
		}
		if (min > a[i]) {
			min = a[i];
		}
	}
	printf("\nGia tri lon nhat Max:%d",max);
	printf("\nGia tri nho nhat Min:%d",min);
	getch();
	return 0;
}
