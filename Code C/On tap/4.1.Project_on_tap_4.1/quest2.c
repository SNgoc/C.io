#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
/*Question 2 Using the array of the structure, write a program with following requirements:
- User to enter the number of product in the factory [5m]. 
- Then enter information for those product (pro no, pro name, price) [20m]. 
- Finally, inputs an pro no, checks whether that pro has existed in the array or not? 
If not found, the program will output an error message and requires the user to re-enter the other pro no. Else, displays the information and exits [35m]
*/
void quest2() 
{
	struct product {
	int no;
	char name[100];
	int price;
}arrP[100];
	int i,n;
	printf("Enter the number of produc in the factory: ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		printf("\nEnter information of product[%d]",i);
		printf("\nEnter No.Product: ");
		scanf("%d",&arrP[i].no);
		printf("\nEnter Name of product: ");
		fflush(stdin);
		gets(arrP[i].name);
		printf("\nEnter a Price: ");
		fflush(stdin);
		scanf("%d",&arrP[i].price);
	}
//Check No to display or not:
	int checkNo;
	while(1)
	{
		printf("\nInput ID to check: ");
		fflush(stdin);
		scanf("%d",&checkNo);
		for(i=1; i<=n; i++)
		{
			if (checkNo == arrP[i].no)
			{
				printf("No\tName\tPrice\n");
				printf("\r%d",arrP[i].no);
				printf("\t%s",arrP[i].name);
				printf("\t%d\n",arrP[i].price);
				return;
			}
		}
		printf("Error!!! Please Re-enter!!!\n");
		continue;
	}
}
