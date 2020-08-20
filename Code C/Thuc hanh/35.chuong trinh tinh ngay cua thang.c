//Viet chuong trinh nhap vao 1 thang, cho biet thang do co bao nhieu ngay
#include<stdio.h>
#include<conio.h>
int main() {
	int month,i;
	for (i = 0; i >= 0; i++){
		printf("Nhap thang:");
		scanf("%d",&month);
		fflush(stdin);
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
			printf("Thang %d co 31 ngay\n",month);
		}
		else if (month == 2) {
			printf("Thang %d co 28 hoac 29 ngay\n",month);
		}
		else {
			printf("Thang %d co 30 ngay\n",month);
		}
		printf("Exit or Continue? Y/N:");
		char ch = getchar();
		fflush(stdin);
		switch(ch){
			case 'y':
			case 'Y':
				printf("Exit!\n");
				return 0;
			case 'n':
			case 'N':
				break;
			default:
				printf("Try again!\n");
		}
	}
}
