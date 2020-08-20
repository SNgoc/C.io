// BT 4 Lab 3
// viet chuong trinh xac dinh 1 thang thuoc Quy nao voi thang nhap tu ban phim
#include<stdio.h>
#include<conio.h>
 int main() {
 	int month;
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
 				printf("\nNhap thang month (1-12): ");
 				scanf("%d",&month);
 				fflush(stdin);
 				switch (month) {
 					case 1:
 					case 2:
 					case 3:
 						printf("Thang %d thuoc Quy I!\n",month);
 						break;
 					case 4:
 					case 5:
 					case 6:
 						printf("Thang %d thuoc Quy II!\n",month);
 						break;
 					case 7:
 					case 8:
 					case 9:
 						printf("\nThang %d thuoc Quy III!\n",month);
 						break;
 					case 10:
 					case 11:
 					case 12:
 						printf("Thang %d thuoc Quy IV!\n",month);
 						break;
 					default:
 						printf("Wrong input!\n");
 						break;
				 }
		 }
	 }
	return 0;
 }
