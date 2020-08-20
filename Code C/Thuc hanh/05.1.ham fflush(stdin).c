//viet chuong trinh Input/Output
#include<stdio.h>
#include<conio.h>

int main() {
	int num;
	char ch[100];
	printf("\nEnter a num:");
	scanf("%d",&num);
	fflush(stdin); //Xoa bo dem ban phim Input = keyboard
	printf("Enter a character:");
	fgets(ch,10,stdin);
	printf("%d \t %s",num,ch);
	return 0;
}
