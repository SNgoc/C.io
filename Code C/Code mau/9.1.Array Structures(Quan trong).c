// Code mau cau truc mang
#include<stdio.h>
#include<conio.h>
int main()
{
	struct product {
		char name[10];
		int quan;
		float price;
	}arrPro[10],temp;
	int i;
	for (i=0; i<3; i++) {
		printf("\nEnter a name of product[%d]: ",i);
		scanf("%s",arrPro[i].name);
		printf("\nEnter a quantity of product[%d]: ",i);
		scanf("%d",&arrPro[i].quan);
		printf("\nEnter a price of product[%d]: ",i);
		scanf("%f",&arrPro[i].price);
	}
	for (i=0; i<3; i++) {
		printf("\nInformation product[%d]\n",i);
		printf("\nName of product: %s\n",arrPro[i].name);
		printf("\nQuantity of product: %d\n",arrPro[i].quan);
		printf("\nPrice of product: %.3f\n",arrPro[i].price);
	}
	//HIEN THEO GIA LON NHAT
	
	temp = arrPro[0];
	for (i=1; i<3; i++) {
		if(temp.price < arrPro[i].price) {
			temp = arrPro[i];
		}
	}
	printf("\nThe product has largest price is: ");
	printf("\nThe name of produc: %s",temp.name);
	printf("\nThe price of produc: %.3f",temp.price);
}
