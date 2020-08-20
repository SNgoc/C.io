// viet chuong trinh tim so nguyen to trong 1 khoang gia tri va in ra cac so do

#include<stdio.h>
#include<conio.h>

int main() {
	int n;
	printf("Enter number n:");
	scanf("%d",&n);
	int i;
	for (i=1; i<=n; ++i) {
		if (i == 2 || i == 3 || i == 5) {
			printf("%d la so nguyen to\n",i);
		}
		else if (i%2 == 0 || i%3 == 0 || i%5 == 0 ) {
			printf("%d khong la so nguyen to\n",i);
		}
		else {
			printf("%d la so nguyen to\n",i);
		}
	}
	getch();
	return 0;
}
