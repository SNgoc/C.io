/*BT 3 Array Assignment C:
Nhap vao n phan tu cua mang array va dao nguoc vi tri cua cac phan tu trong mang
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int n,i;
	int arr[100],brr[100];
	char ch;
	printf("Nhap so phan tu n:");
	scanf("%d",&n);
		for (i = 1; i <= n; i++) {
			printf("Nhap phan tu mang: arr[%d]",i);
			scanf("%d",&arr[i]);
		}
		for (i = 1; i <= n; i++) {
			brr[i] = arr[n-i];
			printf("Mang dao nguoc la: %d\t",brr[i]);
		}
}
