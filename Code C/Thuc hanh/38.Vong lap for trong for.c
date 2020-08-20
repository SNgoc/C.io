//Viet chuong trinh co ban voi for
#include<stdio.h>
#include<conio.h>
int main() {
	int n,i,j;//idem so dong, j dem con so trong 1 dong
		printf("Enter a value:");
		scanf("%d",&n);
		for (i = 1; i <= n; i++) {
			for (j = 1; j <= i; j++) {
				printf("%d",j);
			}
			printf("\n");
		}
		printf("\n");
		for (i = 1; i <= n; i++) {
			for (j = n; j >= i; j--) {
				printf("%d",(n-j+1));
			}
			printf("\n");
		}
}
