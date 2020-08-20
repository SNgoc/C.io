//BT 3 Lab 4
// viet chuong trinh nhap 3 so thuc, in ra man hinh 3 so theo thu tu tang dan
#include<stdio.h>
#include<conio.h>
 int main () {
 	float a,b,c;
 	printf("Nhap 3 so thuc a,b,c:");
 	scanf("%f %f %f",&a,&b,&c);
 	if (a <= b && a <= c) {
 		if (b <= c) {
 			printf("\n%f %f %f",a,b,c);
		}
		else if (b >= c) {
			printf("\n%f %f %f",a,c,b);
		}
	}
	if (b <= a && b <= c) {
 		if (a <= c) {
 			printf("\n%f %f %f",b,a,c);
		}
		else if (a >= c) {
			printf("\n%f %f %f",b,c,a);
		}	
	}
	if (c <= a && c <= b) {
 		if (a <= b) {
 			printf("\n%f %f %f",c,a,b);
		}
		else if (a >= b) {
			printf("\n%f %f %f",c,b,a);
		}	
	}
	return 0;
 }
