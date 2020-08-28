// Code mau cau truc mang
#include<stdio.h>
#include<conio.h>

struct book // chuyen cau truc cho ham khac thi phai khai bao ra ngoai ham main()
{
	int id;
	char name[10];
	double price;
};
int i; // Bien global (dung chung cho nhieu ham)
int main()
{
	struct book bk1;
	//void nhap(struct book);
	void xuat(struct book);
	printf("Input date for struct bk1\n");
	printf("\nEnter an id: ");
	scanf("%d",&bk1.id);
	printf("\nEnter a name: ");
	fflush(stdin);
	scanf("%s",bk1.name);
	printf("\nEnter a price: ");
	scanf("%lf",&bk1.price);
	//nhap(bk1);
	xuat(bk1);
	printf("FINISHED!\n");
}
/*void nhap(struct book b)
{
	printf("\nEnter an id: ");
	scanf("%d",&b.id);
	printf("\nEnter a name: ");
	fflush(stdin);
	scanf("%s",b.name);
	printf("\nEnter a price: ");
	scanf("%lf",&b.price);
}*/
void xuat(struct book b)
{
	printf("ID of book: %d\n",b.id);
	printf("Name of book: %s\n",b.name);
	printf("Price of book: %.2lf\n",b.price);
}

