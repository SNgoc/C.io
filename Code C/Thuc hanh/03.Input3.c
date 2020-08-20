// Input/Output with number

#include<stdio.h>

int main()
{
	int a,b;
	printf("Input number a,b:");
	scanf("%d %d",&a,&b);//ham dung de input nhieu number, nho phai co &
	printf("Output:%d %d",a,b);
	
	//phep cong
	
	printf("\nSum a+b:%d",a+b);
	return 0;
}
