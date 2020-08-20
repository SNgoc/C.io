//Viet chuong trinh Fibonacci (1,1,2,3,5,8,13,...)
#include<stdio.h>
#include<conio.h>
int main() {
	int i,j,k,cnt;
	i= 1;
	i = j;
	printf("%d\t%d\t",i,j);
	for (cnt = 2; cnt <= 20; cnt += 2) {
		k = i + j;
		printf("%d\t",k);
		i = j;
		j = k;
	}
	printf("\n");
	
	
}
