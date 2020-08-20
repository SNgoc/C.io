// viet chuong trinh thay 3 so thuc nhap tu ban phim bang tri tuyet doi cua no
#include<stdio.h>
#include<conio.h>
 int main() {
 	float a,b,c;
 	while (1>0) {
 		printf("Nhap y or n de tiep tuc chuong trinh or exit: ");
 		char ch = getchar();
 		fflush(stdin);
 		float x,y,z;// 3 bien so thuc gia tri tuyet doi cua a,b,c
 		switch (ch) {
 			case 'n':
 			case 'N':
 				printf("Exit!");
 				return 0;
 			case 'y':
 			case 'Y':
 				printf("\nNhap so thuc a,b,c: ");
 				scanf("%f %f %f",&a,&b,&c);
 				fflush(stdin);
 				x = a; y = b; z = c;
 				if (a < 0 ) {
 					x = -a;
 				}
				if (b < 0) {
					y = -b;
				}
				if (c < 0) {
					z = -c;
				}
		printf("Tri tuyet doi cua %.1f %.1f %.1f la: %.1f %.1f %.1f\n",a,b,c,x,y,z);
 				
	 	}
	}
	return 0;
 }
