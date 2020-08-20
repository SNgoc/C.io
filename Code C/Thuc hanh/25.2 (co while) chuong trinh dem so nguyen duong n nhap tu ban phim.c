// viet chuong trinh dem so nguyen duong n
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
 				int count = 0;
 				m = n;
 				while (m != 0) {
 					count++;
 					m = m/10; //phep chia lay phan nguyen
				}
				printf("%d co %d chu so\n",n,count);
				break;
			default:
				printf("Try again!\n");
				break;
		 }
	 }
	return 0;
 }
