// BT 2 Lab 3: Viet chuong trinh nhap 2 so thuc, kiem tra co cung dau hay khong
#include<stdio.h>
#include<conio.h>

int main () {
	float n,m;
	char a;
	while (1 > 0) {
		printf("\nNhap y de tiep tuc or x de thoat:");
		char a = getchar();
		fflush(stdin);
		switch(a) {
			case 'Y':
			case 'y':
				printf("\nNhap so thuc n,m:");
				scanf("%f %f",&n,&m);
				fflush(stdin);
				if (n*m < 0) {
					printf("%.2f va %.2f khac dau\n",n,m);
				}
				else if (n*m >= 0) {
					printf("%.2f va %.2f cung dau\n",n,m);
				}
				break;
			case 'X':
			case 'x':
				printf("Exit!");
				return 0;
			default:
				printf("Try again!");
				break;
		}
	}
	return 0;
}
