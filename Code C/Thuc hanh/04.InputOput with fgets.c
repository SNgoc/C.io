// Input/Output with fgets/fputs
#include<stdio.h>

int main()
{
	char a[100];
	printf("Input:");
	fgets(a,100,stdin);//use to input
	printf("Output:");
	fputs(a,stdout);//use to output
	return 0;
}
