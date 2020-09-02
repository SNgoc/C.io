#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
/*Question 2. Using the array of the structure, write a program with following requirements
- User to enter the number of books . 
- Then enter information for those books (title,author,price) . 
Note: price is a structure that includes pricenoCD, priceCD
- Finally, write the input and output functions for the above array
*/
struct books {
	char title[100];
	char author[100];
	int pricenoCD, priceCD;
}arrB[100];

int InfoBook (int n) {
	int i;
	for (i = 1; i<=n; i++) {
		printf("Title of book %d: ",i);
		fflush(stdin);
		gets(arrB[i].title);
		printf("Author of book %d: ",i);
		fflush(stdin);
		gets(arrB[i].author);
		//Phan nhap gia
		printf("The book %d includes CD or no CD?:(Y/N)",i);
		fflush(stdin);
		char ch = getchar();
		switch (ch) {
			case 'y':
			case 'Y':
				printf("Price with CD: ");
				scanf("%d",&arrB[i].priceCD);
				printf("\n");
				continue;
			case 'n':
			case 'N':
				printf("Price with no CD: ");
				scanf("%d",&arrB[i].pricenoCD);
				printf("\n");
				continue;
			default:
				printf("\nError!!!");
				return 0;
		}
	}
}
int displayBook (int n) {
	int i;
	for (i=1; i<=n; i++) {
		if (arrB[i].priceCD > 0 )
		{
			printf("\nThe Information of book %d with CD: \n",i);
			printf("\nThe title: %s",arrB[i].title);
			printf("\nThe author: %s",arrB[i].author);
			printf("\nThe Price with CD: %d",arrB[i].priceCD);
			printf("\n");
			continue;
		}
		if (arrB[i].pricenoCD >0)
		{
			printf("\nThe Information of book %d with no CD: \n",i);
			printf("\nThe title: %s",arrB[i].title);
			printf("\nThe author: %s",arrB[i].author);
			printf("\nThe Price with no CD: %d",arrB[i].pricenoCD);
			printf("\n");
			continue;
		}
		else 
		{
			printf("\nERROR!!!\n");
			return 0;
		}		
	}
}
void quest2() {
	int numB;
	printf("Enter the number of books: ");
	scanf("%d",&numB);
	printf("\n*****Books Management Program******\n");
	InfoBook(numB);
	printf("\n*****Books Display Information******\n");
	displayBook(numB);
}
