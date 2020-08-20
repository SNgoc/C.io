//viet chuong trinh Input/Output so a,b va kiem tra hieu a-b or b-a co bang so a or b ko
#include<stdio.h>
#include<conio.h>
 int main(){
 	int a,b;
 	printf("Nhap 2 so nguyen a,b:");
 	scanf("%d %d",&a,&b);
 	int x,y;
 	x = a-b;
 	y = b-a;
 	if (x == a || y == a) {
 		printf("Difference is equal %d",a);
	 }
	else if (x == b || y == b) {
		printf("Difference is equal %d",b);
	}
	else {
		printf("Difference is not equal to any of the value entered!");
	}
	return 0;
 }
