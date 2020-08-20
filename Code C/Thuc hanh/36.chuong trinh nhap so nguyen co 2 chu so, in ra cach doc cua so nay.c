//Viet chuong trinh nhap so nguyen co 2 chu so, in ra cach doc cua so nay
#include<stdio.h>
#include<conio.h>
int main() {
	int num,i;
	char tram[100];
	char *donvi[] = {"khong","mot", "hai","ba", "bon","nam", "sau", "bay","tam","chin"};
	char *chuc[] = {"muoi", "hai muoi","ba muoi", "bon muoi","nam muoi", "sau muoi", "bay muoi","tam muoi","chin muoi"};
	for (i = 0; i <= 5; i++) {
		printf("Nhap so nguyen 2 chu so:");
		scanf("%d",&num);
		int x,y;// bien dung de truy xuat phan tu
		x = num/10 - 1;
		y = num%10;
		printf("%d la %s %s\n",num,chuc[x],donvi[y]);
	}
}
