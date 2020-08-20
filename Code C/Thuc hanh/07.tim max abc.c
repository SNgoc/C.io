// Input/Output so sanh a,b,c
#include<stdio.h>

int main() {
	int a,b,c;
	printf("Input num a,b,c:");
	scanf("%d %d %d",&a,&b,&c);
	int max;
	max = a;
	if (max < b) {
		max = b;
	}
	if (max < c) {
		max = c;
	}
	printf("Max:%d",max);
	return 0;
}
