// viet chuong trinh input gia tri cm va output gia tri inches
//Biet 1 inches = 2.54 cm va 1 feet = 12 inch

#include<stdio.h>
#include<conio.h>

int main() {
	printf("Nhap gia tri cm:");
	float cm,inch,feet;
	scanf("%f",&cm);
	inch = cm/2.54;
	feet = inch/12;
	printf("%.1f cm = %.1f inches",cm,inch);
	printf("\n %.1f inches = %.1f feet",inch,feet);
	return 0;
}
