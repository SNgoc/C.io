// Code mau cau truc mang, xep theo gia tang dan
#include<stdio.h>
#include<conio.h>

struct book // chuyen cau truc cho ham khac thi phai khai bao ra ngoai ham main() (global struct)
{
	int id;
	char name[100];
	double price;
};
int i,j,n; // Bien global (dung chung cho nhieu ham) (i,j dung cho loop; n la size of array)
int main()
{
	printf("Enter a size of array: ");
	scanf("%d",&n);
	struct book arrB[n];// Khai bao mang cho structure book
	void xep(struct book arr[]);
	printf("\nInput for array: ");
	for (i=0; i<n; i++) 
	{
		printf("\nEnter an id: ");
		scanf("%d",&arrB[i].id); //bien id cua phan tu thu i trong array
		fflush(stdin);
		printf("\nEnter a name: ");
		gets(arrB[i].name);
		printf("Enter a price: ");
		scanf("%lf",&arrB[i].id);
		printf("\n");
	}
	printf("\nOutput data of array");
	xep(arrB);// voi mang cau truc, neu khong co chi muc, se truc tiep luu tung mang
	printf("\nFinished\n");
}

void xep(struct book arr[])
{
	struct book temp; // Khai bao mang temp cho struct book de gan gia tri cho arr[i] va arr[j]
	for (i=0; i<n-1; i++)
	{
		for (j=i+1; j<n; j++)
		{
			if (arr[i].price > arr[j].price)
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (i=0; i<n; i++)
	{
		printf("\nInformation of arrB[%d]\n",i);
		printf("ID: %d\n",arr[i].id);
		printf("Name: %s\n",arr[i].name);
		printf("Price: %.2lf",arr[i].price);
	}
}
