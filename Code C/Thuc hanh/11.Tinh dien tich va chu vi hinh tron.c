// viet chuong trinh tinh dien tich va chu vi hinh tron

#include<stdio.h>
#include<conio.h>
#define PI 3.14

int main() {
	printf("Goi S va P la dien tich va chu vi hinh tron, r la ban kinh");
	float S,P,r;
	printf("\nNhap ban kinh:");
	scanf("%f",&r);
	S = r*r*PI;
	P = 2*r*PI;
	printf("\nDien tich hinh tron:%.4f",S);
	printf("\nChu vi hinh tron:%.4f",P);
	getch();
	return 0;
}
