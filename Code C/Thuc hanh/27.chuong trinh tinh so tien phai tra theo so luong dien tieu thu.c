/* Viet chuong trinh tinh so tien phai tra theo so luong dien tieu thu:
1-50 so dau: 1200
51-150: 1500
151 tro len: 3000
Nhap vao so luong dien tieu thu va tinh ra so tien can tra
*/
#include<stdio.h>
#include<conio.h>

int main () {
	int x,total;
	char ch;
	while (1>0){
		printf("\nNhap y de vao or n de exit:");
		char ch = getchar();
		fflush(stdin);
		switch (ch) {
			case 'y':
				printf("Nhap so luong dien tieu thu x:");
				scanf("%d",&x);
				fflush(stdin);
				if (x < 51) { //tieu thu tu 50 so dien trong thang
					total = x*1200;
					printf("%d so co so tien: %d",x,total);
				}
				else if (x < 151) { //tieu thu tu 150 so dien trong thang
					total = 50 *1200 + (x-50)*1500;
					printf("%d so co so tien: %d",x,total);
				}
				else { //tieu thu tu 151 so dien tro len trong thang
					total = 50*1200 + 100*1500 + (x-150)*3000;
					printf("%d so co so tien: %d",x,total);
				}
				break;
			case 'n':
				printf("Exit!");
				return 0;
			default:
				printf("Try again!");
				break;
			}
	}
	
	return 0;
}
