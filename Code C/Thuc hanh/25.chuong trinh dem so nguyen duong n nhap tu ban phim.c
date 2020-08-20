// BT 2 Lab 3: Viet chuong trinh dem so nguyen duong n nhap tu ban phim
#include<stdio.h>
#include<conio.h>

int main () {
	int n,m;
	printf("Nhap so nguyen duong n:");
	scanf("%d",&n);
	m = n;
	int count = 0;
	if (n == 0) {
		count = 1;
	}
	while (m != 0) { //Goi y: dùng while; lay so n chia cho 10, neu chia > 0 thi count += count, neu = 0 thi break
		count++;
		m = m/10; //phep chia nguyen
	}
	printf("%d co %d chu so",n,count);
	return 0;
}
