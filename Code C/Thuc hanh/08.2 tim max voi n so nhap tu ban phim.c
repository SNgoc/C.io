// viet chuong trinh tim max cua n so bat ky voi n nhap tu ban phim
#include<stdio.h>
#include<conio.h>

int main() {
	int a[1000];
	int n;
	printf("Input n phan tu so nguyen:");
	scanf("%d",&n);
	int i;
	for (i = 1; i <= n; i++) { 
		printf("\nInput phan tu a[%d]:",i);
		scanf("%d",&a[i]);
	}
	int max = a[1];
	for (i = 1; i <= n; i++) {
		if (max < a[i]) {
			max = a[i];
		}
	}
	int min = a[1];
	for (i = 1; i <= n; i++) {
		if (min > a[i]) {
			min = a[i];
		}
	}
	printf("\nMax trong %d so nguyen: %d",n,max);
	printf("\nMin trong %d so nguyen: %d",n,min);
	return 0;
}
