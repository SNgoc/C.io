// viet chuong trinh tinh tong so nguyen duong n voi n nhap tu tu ban phim
#include<stdio.h>
#include<conio.h>
 int main() {
 	int n,m;
 	while (1>0) {
 		printf("Nhap y or n de tiep tuc chuong trinh or exit: ");
 		char ch = getchar();
 		fflush(stdin);
 		switch (ch) {
 			case 'n':
 			case 'N':
 				printf("Exit!");
 				return 0;
 			case 'y':
 			case 'Y':
 				printf("\nNhap so nguyen duong n: ");
 				scanf("%d",&n);
 				fflush(stdin);
 				int sum = 0;
 				m = n;//m la gia tri gan tu so nguyen n
 				int x;// x la phan du cua m/10
 				while (m != 0) {
 					x = m % 10;
 					m = m/10; //phep chia lay phan nguyen
 					sum += x;
				}
				printf("%d co tong cac chu so la: %d\n",n,sum);
				break;
			default:
				printf("Try again!\n");
				break;
		 }
	 }
	return 0;
 }
