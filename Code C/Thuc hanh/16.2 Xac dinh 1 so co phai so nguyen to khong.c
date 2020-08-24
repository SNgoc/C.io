//Viet chuong trinh tim so nguyen to
#include<stdio.h>
#include<conio.h>
void prime() {
	int n,i;
	printf("Enter a value:");
	scanf("%d",&n);
	if (n < 2) {
		printf("%d khong phai so nguyen to\n",n);
		return;
	}
	if (n == 2){
		printf("%d la so nguyen to\n",n);
		return;
	}
	for (i = 2; i <= n/2; i++) { // n/2 vi 1 so khong bao gio chia het cho 1 so lon hon 1/2 cua no
		if (n % i == 0){
			printf("%d khong la so nguyen to\n",n);
			return;
		}
	}
	printf("%d la so nguyen to\n",n);
}
int main() {
	while (1>0) {
		prime();
	}
}
