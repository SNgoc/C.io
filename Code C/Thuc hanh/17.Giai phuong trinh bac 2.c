// viet chuong trinh giai phuong trinh bac 2: a*x^2 + b*x + c = 0 voi a,b,c nhap tu ban phim
// khong xet truong hop a = 0

#include<stdio.h>
#include<conio.h>
#include<math.h>//khai bao thu vien toan hoc

int main() {
	float a,b,c;
	printf("input a,b,c voi a != 0:");
	scanf("%f %f %f",&a,&b,&c);
	float delta,x1,x2;
	delta = b*b - 4*a*c;
	printf("Delta: %.3f",delta);
	if (delta < 0) {
		printf("\nPhuong trinh vo nghiem!");
	}
	else if (delta == 0) {
		printf("\nPhuong trinh co nghiem kep: x1 = x2 = -b/(2a) = %.3f",-b/(2*a));
	}
	else {
		delta = sqrt(delta);
		printf("\nsqrt delta:%.3f",delta);
		x1 = (-b - delta)/(2*a);
		x2 = (-b + delta)/(2*a);
		printf("\nPhuong trinh co 2 nghiem x1,x2 la: %.3f %.3f",x1,x2);
	}
	getch();
	return 0;
}
