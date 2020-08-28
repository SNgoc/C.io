// Code mau cau truc mang, xep theo gia tang dan
#include<stdio.h>
#include<conio.h>

struct book // chuyen cau truc cho ham khac thi phai khai bao ra ngoai ham main()
{
	int id;
	char name[10];
	double price;
};
int i,j,n; // Bien global (dung chung cho nhieu ham) (i,j dung cho loop; n la size of array)
int main()
{
	printf("Enter a size of array: ");
	scanf("%d",&n);
	struct book arrB[n];
	printf("\nInput for array: ");
	for (i=0; i<n; i++) 
	{
		printf("\nEnter an id: ");
		scanf("%d",&arrB[i].id); //bien id cua phan tu thu i trong array
		fflush(stdin);
		printf("\nEnter a name: ");
		gets(arrB[i].name);
		printf("\nEnter a price: ");
		scanf("%lf",&arrB[i].id);
		printf("\n");
	}
}

