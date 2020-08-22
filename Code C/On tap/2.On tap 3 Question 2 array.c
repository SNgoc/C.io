/* 
Question 2 (60 marks): 
Using the array of the structure, write a program with following requirements:
- User to enter the number of products [5m]. 
- Then enter information for those products (code, name, price,quantity) [20m]. 
- Finally, display all products and the total amount product [35m]
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main() {
	int numPro,i;
	printf("Enter a maximum of products: ");
	scanf("%d",&numPro);
	fflush(stdin);
	char code[100][100],name[100][100];
	int price[100], quanity[100];
	for (i = 1; i <= numPro; i++) {
		printf("\nInput for product %d: ",i);
		printf("\n\t Code: ");
		scanf("%s",code[i]);
		fflush(stdin);
		printf("\t Name: ");
		scanf("%s",name[i]);
		fflush(stdin);
		printf("\t Price: ");
		scanf("%d",&price[i]);
		printf("\t Quanity: ");
		scanf("%d",&quanity[i]);
	}
	printf("\n-------------------Product Details-------------------\n");
	printf("Code \tName \tPrice \tQuanity \tAmount\n");
	int amount[1000];
	for (i = 1; i<= numPro; i++) {
		amount[i] = price[i]*quanity[i];
		printf("\r%s\t",code[i]);// \r de can le tr, \t phai printf tung phan de can dong
		printf("%s\t",name[i]);
		printf("%d\t",price[i]);
		printf("%d\t",quanity[i]);
		printf("\t%d\n",amount[i]);
	}
	int maxAmount;
	char maxCode[1000],maxName[1000];
	int maxPrice,maxQuanity;
	maxAmount = amount[1];
	for (i=1; i<= numPro; i++) {
		if (maxAmount < amount[i]) {
			maxAmount = amount[i];
			strcpy(maxCode,code[i]);
			strcpy(maxName,name[i]);
			maxPrice = price[i];
			maxQuanity = quanity[i];
		}
	}
	printf("\nThe most total amount product:");
	printf("\nCode: %s",maxCode);
	printf("\nName: %s",maxName);
	printf("\nPrice: %d \tQuanity: %d \tAmount: %d",maxPrice, maxQuanity, maxAmount);
}
