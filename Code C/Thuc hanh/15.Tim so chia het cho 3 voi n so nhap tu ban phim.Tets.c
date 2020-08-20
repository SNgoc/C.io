// viet chuong trinh tim so chia het cho 3 trong 1 khoang gia tri va in ra gia tri do

#include<stdio.h>
#include<conio.h>

int main () {
	printf("Input a int num:");
	int num;
	scanf("%d",&num);
	int i;
	for (i = 0; i <= num; ++i) {
		if (i%3 == 0) {
			printf("\n%d chia het cho 3",i);
		}
	}
	getch();
	return 0;
}
