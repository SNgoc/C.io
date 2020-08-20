//viet chuong trinh Input/Output so a,b va kiem tra a co chia het b khong
#include<stdio.h>
#include<conio.h>

int main() {
	int a,b;
	printf("Nhap so a,b:");
	scanf("%d %d",&a,&b);
	if (a%b == 0) {
		printf("%d chia het cho %d",a,b);
	}
	else {
		printf("%d khong chia het cho %d",a,b);
	}
	return 0;
}
