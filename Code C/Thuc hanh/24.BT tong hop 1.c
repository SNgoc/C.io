/* nhap tu ban phim day so nguyen a co n phan tu (4<n<50);
Hien day da nhap, 5 phan tu tren 1 dong, moi phan tu chiem 4 vi tri, dua ra man hinh cac phan tu co gia tri chia het cho 3 va 5, hien so luong phan tu do */
#include<stdio.h>
#include<conio.h>

int main() {
	int a[100],n;
	printf("Nhap n so nguyen voi 4 < n < 50:");
	scanf("%d",&n);
	int i;
	for (i = 1; i <= n; i++) {
		printf("\na[%d]:",i);
		scanf("%d",&a[i]);
	}
	for (i = 1; i <= n; i++) {//code in ra 5 phan tu tren 1 dong
		printf("%4d ",a[i]);
		if (i % 5 == 0) {
			printf("\n");
		}
	}
	for (i = 1; i <= n; i++) {
		if (a[i] % 3 == 0 && a[i ]% 5 == 0) {// dua ra man hinh cac phan tu chia het cho 3 va 5
			printf("\n%d chia het cho 3 va 5",a[i]);
		}
	}
	return 0;
}
