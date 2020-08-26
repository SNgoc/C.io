// Code mau Structures
#include<stdio.h>
#include<conio.h>
int main()
{
	struct book {
		char title[25];
		char author[20];
		int price;
	}book1,book2;
	// BOOK1
	printf("\nInput information to book1\n");
	printf("Enter a title of book1: ");
	fflush(stdin);
	gets(book1.title);
	printf("Enter an author of book1: ");
	fflush(stdin);
	gets(book1.author);
	printf("\nEnter a price of book1: ");
	scanf("%d", &book1.price);
	// BOOK2
	printf("\nInput information to book2\n");
	printf("Enter a title of book2: ");
	fflush(stdin);
	gets(book2.title);
	printf("Enter an author of book2: ");
	fflush(stdin);
	gets(book2.author);
	printf("\nEnter a price of book2: ");
	scanf("%d", &book2.price);
	//Output book 1
	printf("\nInformation of book1\n");
	printf("\nTitle of book: %s",book1.title);
	printf("\nAuthor of book: %s",book1.author);
	printf("\nPrice of book: %d",book1.price);
	//Output book 2
	printf("\nInformation of book2\n");
	printf("\nTitle of book: %s",book2.title);
	printf("\nAuthor of book: %s",book2.author);
	printf("\nPrice of book: %d",book2.price);
}
