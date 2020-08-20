// Input/Output with number
#include<stdio.h>

int main() {
	int a,b;
	printf("Input number a,b:");
	scanf("%d %d",&a,&b);//Don't forget &, can thiet khi dung cho number
	printf("\nSum:%d",a+b);
	printf("\nSubtract:%d",a-b);
	printf("\nMulti:%d",a*b);
	printf("\nDivide:%.2f",(float)a/b);//%.2f la chinh so thap phan hien thi phia sau, (float) la lenh chia hien thi so thap phan
	return 0;
}
