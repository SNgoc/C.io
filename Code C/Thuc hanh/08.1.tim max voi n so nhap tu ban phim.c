// viet chuong trinh tim max cua n so bat ky voi n nhap tu ban phim
#include<stdio.h>
#include<conio.h>

//viet ham void tim max trong mang a
void input (int a[], int n) {
	int i;
	for (i = 0; i <= n; i++) {
		printf("Nhap so int a[%d]:",i);
		scanf("%d",&a[i]);
	}
}

int max (int a[], int n) {
	int Max = a[0];
	int i;
	for (i = 1; i <= n; i++) // hàm for neu su dung dau {} se ko lap lai doan code
		if (Max < a[i]) {
			Max = a[i];
		}
	return Max;
}

int main() {
	int a[1000];
	int n;
	printf("\nInput int n:");
	scanf("%d",&n);
	input (a,n);
	printf("\nMax:%d",max(a,n));
	return 0;
}
