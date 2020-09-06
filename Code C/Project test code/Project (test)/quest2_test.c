#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
//Requirement 2 Array of Structure Laptops:


void quest2()
{
	//Yeu cau 1
	struct laptop {
		char provider[20];
		char name [20];
		int quantity;
		double price, amount;
	}arrL[100],maxP;
	int i,numLap;
	printf("Enter the number of laptops: ");
	scanf("%d",&numLap);
	fflush(stdin);
	for (i=1; i<=numLap; i++) 
	{
		printf("\nInput for laptop %d:\n",i);
		fflush(stdin);
		printf("Input Name: ");
		fflush(stdin);
		gets(arrL[i].name);
		printf("Input Provider: ");
		fflush(stdin);
		gets(arrL[i].provider);
		printf("Input Price: ");
		scanf("%lf",&arrL[i].price);
		printf("Input Quantity: ");
		scanf("%d",&arrL[i].quantity);
	}
	//Yeu cau 2
	printf("\n-------------------Bill details-------------------\n");
	printf("Name \t\tProvider \tPrice \t\tQuanity \tAmount\n");
	for (i=1; i<=numLap; i++)
	{
		arrL[i].amount = arrL[i].price * arrL[i].quantity;
		printf("\r%-10s\t",arrL[i].name);// \r de can le tr, \t phai printf tung phan de can dong
		printf("%-10s\t",arrL[i].provider);
		printf("%.1lf\t",arrL[i].price);
		printf("\t%d\t",arrL[i].quantity);
		printf("\t%.1lf\n",arrL[i].amount);
	}
}
