//Viet chuong trinh nhap vao tung ky tung va in thanh 1 word tu cac ky tu do
#include<stdio.h>
#include<conio.h>
int main(){
	char name[25];
	int i,dung;
	printf("Input name:\n");
	for (i = 0; i < 25; i++){
		printf("Enter a character name[%d]: ",i);
		scanf("%c",&name[i]);
		fflush(stdin);
		if (name[i] == '@'){
			dung = i;
			break;
		}
	}
	printf("\nThe name is ");
	for (i=0; i< dung; i++){
		printf("%c",name[i]);
		}
	printf("\n");
}

