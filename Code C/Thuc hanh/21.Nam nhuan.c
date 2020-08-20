//viet chuong trinh tim nam nhuan
#include<stdio.h>
#include<conio.h>

int main() {
	int nam;
	printf("Nhap nam can tinh:");
	scanf("%d",&nam);
	if (nam % 4 == 0) {
		printf("%d la nam nhuan",nam);
	}
	else {
		printf("%d khong la nam nhuan",nam);
	}
	return 0;
}
