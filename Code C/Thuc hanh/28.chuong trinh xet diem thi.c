// viet chuong trinh xet diem thi
#include<stdio.h>
#include<conio.h>
int main() {
	float mark;
	char dt,kv;
	/* Nhap diem
	neu diem >= 15: Welcome pass
	neu diem < 15
	neu diem >= 13: hoi them co khu vuc khong: y hoac Y -> co:pass
	neu !y hoac !Y: co dan toc khong: co : pass
	neu 12 <= diem < 13: co dan toc khong :y Y: pass, con lai fail
	*/
	printf("Nhap diem:");
	scanf("%f",&mark);
	fflush(stdin);
	if (mark >= 15) {
		printf("Welcome Pass!");
	}
	else if ( 13 <= mark && mark <15) {
		printf("\nCo khu vuc khong:");
		char kv = getchar();
		fflush(stdin);
		if (kv == 'y' || kv =='Y') {
			printf("Pass");
		}
		else {
			printf("\nCo dan toc khong:");
			char dt = getchar();
			fflush(stdin);
			if (dt == 'y' || dt == 'Y') {
				printf("Pass!");
			}
			else {
				printf("Fail!");
			}
			}
		}
	else if (12 <= mark && mark < 13) {
		printf("\nCo dan toc khong:");
		char dt = getchar();
		fflush(stdin);
		if (dt == 'y' || dt == 'Y') {
			printf("Pass!");
		}
		else {
			printf("Fail!");
		}
	}
	else {
		printf("Fail!");
	}
	return 0;
}
