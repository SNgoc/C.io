// Input/Output character with fgets/fputs
#include<stdio.h>

int main()
{
	char a[30];
	printf("Input:");
	fgets(a,30,stdin);//Input
	
	printf("Output:");
	fputs(a,stdout);//Output

	return 0;
}
