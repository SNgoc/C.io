// viet chuong trinh tim so chan le
#include<stdio.h>
#include<conio.h>//lenh khai bao theo yeu cau

int main() {
	int n;
	printf("Input num:");
	scanf("%d",&n);
	if (n%2==0) {
		printf("%d la so chan",n);
	}
	else {
		printf("%d la so le",n);
	}
	return 0;
}
