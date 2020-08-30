// Viet chuong trinh nhap so cong van den va xuat ra so cong van bat ky khi duoc yeu cau
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct CVden {
		int soCV;
		char tenCV[1000];
		int ngay, thang, nam;
		char gui[1000];
		char nhan[1000];
	}arrCV[2500];

void VBden()
{
	int i = 1;
	for (i=1; i <= 300; i++)
	{
		printf("Nhap so CV den: ");
		scanf("%d",&arrCV[i].soCV);
		printf("\nNhap ten CV: ");
		fflush(stdin);
		gets(arrCV[i].tenCV);
		printf("\nNhap ngay, thang, nam: ");
		scanf("%d %d %d",&arrCV[i].ngay,&arrCV[i].thang,&arrCV[i].nam);
		printf("\nNhap noi gui: ");
		fflush(stdin);
		gets(arrCV[i].gui);
		printf("\nNhap noi nhan: ");
		fflush(stdin);
		gets(arrCV[i].nhan);
		printf("\nContinue: Y/N?\n");
		char cmd = getchar();
		if (cmd == 'Y' || cmd == 'y')
		{
			continue;
		}
		else if (cmd == 'N' || cmd == 'n')
		{
			break;
		}
	}
	int checkso;
	while (1)
	{
		printf("\nNhap so CV de check thong tin (nhap 0 de exit): ");
		scanf("%d",&checkso);
		if (checkso == 0) {
			printf("\nExit!!!");
			exit(0);
		}
		for (i=1; i <= 301; i++)
		{
			if (checkso == arrCV[i].soCV) {
				printf("\nSo CV: %d \nTen CV: %s \nNgay/Thang/Nam: %d/%d/%d",arrCV[i].soCV,arrCV[i].tenCV,arrCV[i].ngay,arrCV[i].thang,arrCV[i].nam);
				printf("\nNoi gui: %s",arrCV[i].gui);
				printf("\nNoi nhan: %s",arrCV[i].nhan);
				break;
			}
			else if ( i == 301) {
				printf("\nSo CV nay khong ton tai!!!");
				break;
			}
		}
	}
}

int main () 
{
	VBden();
}
