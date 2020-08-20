//Viet chuong trinh in ra hinh chu nhat co kich thuoc m*n
#include<stdio.h>
#include<conio.h>
int main(){
	int m,n;
	printf("Nhap canh m,n:");// ,m la ngang, n la cao
	scanf("%d %d",&m,&n);
	int i,j;
	for (i = 1; i <= n; i++){// hinh chu nhat dac
		for (j = 1; j <= m; j++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n\n");
	for (i = 1; i <= n; i++){// hinh chu nhat rong
		for (j = 1; j <= m; j++){
			if (i == 1|| j == 1 || i == m || j == m){// dieu kien de in ra dong * ngang
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
}

