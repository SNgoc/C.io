//BT lab 4
//Viet chuong trinh nhap so nguyen co 3 chu so, in ra cach doc cua so nay
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>//khai bao de dung ham exit()
int main() {
	int num,i;
	char ch;
	char *tram[] = {"", "mot tram","hai tram","ba tram","bon tram","nam tram","sau tram","bay tram","tam tram","chin tram"};
	char *donvi[] = {"", "mot", "hai","ba", "bon","nam", "sau", "bay","tam","chin"};
	char *chuc[] = {"", "le","muoi", "hai muoi","ba muoi", "bon muoi","nam muoi", "sau muoi", "bay muoi","tam muoi","chin muoi"};
	for (i = 0; i >= 0; i++) {
		printf("Nhap so nguyen 3 chu so:");
		scanf("%d",&num);
		fflush(stdin);
		int x,y,z;// bien dung de truy xuat phan tu: x la tram, y la chuc, z la don vi
		if (num % 100 == 0) {// truong hop so chia het cho 100
			x = num/100;
			y = 0; z = 0;
		}
		else if (num % 100 != 0) {// truong hop so khong chia het cho 100
			x = num/100;
			y = (num/10)%10;
				if (y == 0 && num > 10) {// truong hop hang chuc la 0-> 101: doc thanh mot le mot
					y = 1;
				}
				else if ( y == 0 && num < 10) {// truong hop num < 10
					y = 0;
				}
				else {
					y += 1;
				}
			z = (num%100)%10;
		}
		printf("%d la %s %s %s\n",num,tram[x],chuc[y],donvi[z]);
		printf("Do you want to continue? Y/N: \n");
		scanf("%c",&ch);
		if (ch == 'Y' || ch == 'y'){
			continue;
		}
		else if (ch == 'N' || ch == 'n') {
			break;
		}
		else {
			printf("Try again!\n");
			continue;
		}
		exit(0);
	}
}
