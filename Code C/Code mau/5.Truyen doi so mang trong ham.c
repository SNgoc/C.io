//truyen doi so mang trong ham
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int i,j;
	int arr[5];
	void inputArray(int[]);
	void outputArray(int[]);
	printf("\nEnter a value of Array: \n");
	inputArray(arr);
	printf("\nThe output of array: ");
	outputArray(arr);
	printf("\nFinished\n");
}
void inputArray(int arr[]) {
	int i;
	for (i = 0; i<5; i++) {
		printf("Enter a value arr[%d]: ",i);
		scanf("%d",&arr[i]);
	}
}
void outputArray(int arr[]) {
	int i;
	for (i = 0; i<5; i++) {
		printf("\narr[%d] = %d",i,arr[i]);
	}
}
