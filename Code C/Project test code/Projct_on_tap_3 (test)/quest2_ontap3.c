#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
//Question 2 Array of Structure Product:


void quest2()
{
	//Yeu cau 1
	struct product {
		char code[10];
		char name [20];
		int price, quantity;
		int amount;
	}arrP[100],maxP;
	int i,numPro;
	printf("Input size of array product: ");
	scanf("%d",&numPro);
	fflush(stdin);
	for (i=0; i<numPro; i++) 
	{
		printf("\nInput for product %d:\n",i);
		fflush(stdin);
		printf("Input Code: ");
		gets(arrP[i].code);
		fflush(stdin);
		printf("Input Name: ");
		gets(arrP[i].name);
		printf("Input Price: ");
		scanf("%d",&arrP[i].price);
		printf("Input Quantity: ");
		scanf("%d",&arrP[i].quantity);
	}
	//Yeu cau 2
	printf("\n-------------------Product Details-------------------\n");
	printf("Code \tName \tPrice \tQuanity \tAmount\n");
	for (i=0; i<numPro; i++)
	{
		arrP[i].amount = arrP[i].price * arrP[i].quantity;
		printf("\r%s\t",arrP[i].code);// \r de can le tr, \t phai printf tung phan de can dong
		printf("%s\t",arrP[i].name);
		printf("%d\t",arrP[i].price);
		printf("%d\t",arrP[i].quantity);
		printf("\t%d\n",arrP[i].amount);
	}
	//Yeu cau 3
	maxP.amount = arrP[0].amount;
	for (i=0; i<numPro; i++)
	{
		if (maxP.amount < arrP[i].amount) {
			maxP.amount = arrP[i].amount;
			strcpy(maxP.code,arrP[i].code);
			strcpy(maxP.name,arrP[i].name);
			maxP.price = arrP[i].price;
			maxP.quantity = arrP[i].quantity;
		}
	}
	printf("\nThe most total amount product:");
	printf("\nCode: %s",maxP.code);
	printf("\nName: %s",maxP.name);
	printf("\nPrice: %d \tQuanity: %d \tAmount: %d\n",maxP.price, maxP.quantity, maxP.amount);
}
