//On tap 3
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
// PHAN KHAI BAO HAM VA VIET CODE

//Display
void display()
{
	int i,j;//i la doc, j la ngang
	char m[] = {"Selecting appropriate action:"};
	char n[] = {"1. Question 1"};
	char o[] = {"2. Question 2"};
	char p[] = {"3. Quit program"};
	
	for (i=1; i<=6; i++){
		for (j=1; j<=55; j++){
			if (i == 1 || j == 1 || i == 6){
				printf("*");
			}
			else if (i == 2) {
				if (j == 6) {
					printf("%s",m);
				}
				else if (j==53-strlen(m)){
					printf("*");
				}
				else {
					printf(" ");
				}
			}
			else if (i == 3) {
				if (j == 6) {
					printf("%s",n);
				}
				else if (j==53-strlen(n)){
					printf("*");
				}
				else {
					printf(" ");
				}
			}
			else if (i == 4) {
				if (j == 6) {
					printf("%s",o);
				}
				else if (j==53-strlen(o)){
					printf("*");
				}
				else {
					printf(" ");
				}
			}
			else if (i == 5) {
				if (j == 6) {
					printf("%s",p);
				}
				else if (j==53-strlen(p)){
					printf("*");
				}
				else {
					printf(" ");
				}
			}
		}
		printf("\n");
	}
}

//Question 1 Fibonacci series (1,1,2,3,5….)
void quest1() {
	int fibo,a,b;
	a = 1;
	a = b;
	printf("Enter a num to print Fibonacci: ");
	scanf("%d",&fibo);
	fflush(stdin);
	printf("The Fibonacci series:\n");
	printf("%d\t%d\t",a,b);
	int sum,i;
	for (i=2; i <= fibo; i++) {
		sum = a+b;
		if (sum <= fibo) {
			printf("%d\t",sum);
			a = b;
			b = sum;
		}
	}
	printf("\nFinished\n");
}

//Question 2 Array Product:
void quest2() {
	int numPro,i;
	printf("Enter a maximum of products: ");
	scanf("%d",&numPro);
	fflush(stdin);
	char code[100][100],name[100][100];
	int price[100], quanity[100];
	//Yeu cau 1
	for (i = 1; i <= numPro; i++) {
		printf("\nInput for product %d: ",i);
		printf("\n\t Code: ");
		scanf("%s",code[i]);
		fflush(stdin);
		printf("\t Name: ");
		scanf("%s",name[i]);
		fflush(stdin);
		printf("\t Price: ");
		scanf("%d",&price[i]);
		printf("\t Quanity: ");
		scanf("%d",&quanity[i]);
	}
	//Yeu cau 2
	printf("\n-------------------Product Details-------------------\n");
	printf("Code \tName \tPrice \tQuanity \tAmount\n");
	int amount[1000];
	for (i = 1; i<= numPro; i++) {
		amount[i] = price[i]*quanity[i];
		printf("\r%s\t",code[i]);// \r de can le tr, \t phai printf tung phan de can dong
		printf("%s\t",name[i]);
		printf("%d\t",price[i]);
		printf("%d\t",quanity[i]);
		printf("\t%d\n",amount[i]);
	}
	//Yeu cau 3
	int maxAmount;
	char maxCode[1000],maxName[1000];
	int maxPrice,maxQuanity;
	maxAmount = amount[1];
	strcpy(maxCode,code[1]);
	strcpy(maxName,name[1]);
	maxPrice = price[1];
	maxQuanity = quanity[1];
	for (i=1; i<= numPro; i++) {
		if (maxAmount < amount[i]) {
			maxAmount = amount[i];
			strcpy(maxCode,code[i]);
			strcpy(maxName,name[i]);
			maxPrice = price[i];
			maxQuanity = quanity[i];
		}
	}
	printf("\nThe most total amount product:");
	printf("\nCode: %s",maxCode);
	printf("\nName: %s",maxName);
	printf("\nPrice: %d \tQuanity: %d \tAmount: %d",maxPrice, maxQuanity, maxAmount);
	printf("\n");
}

//PHAN CHAY CODE:

int main() {
	while (0<1) {
		int cmd;
		display();
		printf ("\nEnter an Option:\n"); // them \n sau cau de sua loi bug quest1() khong tinh duoc fibo
		scanf("%d",&cmd);
		switch (cmd) {
			case 1:
				quest1();
				break;
			case 2:
				quest2();
				break;
			case 3:
				printf("\nQuit!!!");
				exit(0);
			default:
				printf("Invalid!!!\n");
		}
	}
}

