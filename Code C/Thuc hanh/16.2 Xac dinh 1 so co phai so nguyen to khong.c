//Viet chuong trinh tim so nguyen to
#include<stdio.h>
#include<conio.h>
int main() {
	int n,i;
	printf("Enter a value:");
	scanf("%d",&n);
	if (n < 2) {
		printf("%d khong phai so nguyen to",n);
	}
	if (n == 2){
		printf("%d la so nguyen to\n",n);
	}
	for (i = 2; i <= n/2; i++) { // n/2 vi 1 so khong bao gio chia het cho 1 so lon hon 1 nua cua no
		if (n % i == 0){
			printf("%d khong la so nguyen to\n",n);
			return 0;
		}
	}
	printf("%d la so nguyen to\n",n);
}
