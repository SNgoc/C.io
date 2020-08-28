// Code mau Structures
#include<stdio.h>
#include<conio.h>
//KHAI BAO HAM struct product ben ngoai ham int main
struct product { // chuyen cau truc cho ham khac thi phai khai bao ra ngoai ham main()
		char name[10];
		int quan;
		double price;
	}pro1;

int main()
{
	void display(struct product);
	printf("\nEnter a name: ");
	scanf("%s",pro1.name);
	printf("\nEnter a quantity: ");
	scanf("%d",&pro1.quan);
	printf("\nEnter a price: ");
	scanf("%lf",&pro1.price);
	display(pro1);
	printf("\nFinished\n");
}
void display(struct product pd1) //khai bao ham struct product ben ngoai de co the su dung dc pd1
{//khai bao mau ham
	printf("\nInformation of Product 1\n");
	printf("\nName of product: %s",pd1.name);
	printf("\nQuantity of product: %d",pd1.quan);
	printf("\nPrice of product: %.2lf\n",pd1.price);
}
