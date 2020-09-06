// Viet chuong trinh nhap so cong van den va xuat ra so cong van bat ky khi duoc yeu cau
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main() {
	struct employee {
		int empID;
		char empName[100];
		int salary, allowance;
		int totalsalary;
	}arrE[100];
	int numE,i;
	printf("Enter the number of employees: ");
	scanf("%d",&numE);
	for (i=1; i<=numE; i++) 
	{
		printf("\nEnter information employees %d:\n",i);
		fflush(stdin);
		printf("Input ID: ");
		scanf("%d",&arrE[i].empID);
		printf("Input Name: ");
		fflush(stdin);
		gets(arrE[i].empName);
		printf("Input Salary: ");
		scanf("%d",&arrE[i].salary);
		printf("Input Allowance: ");
		scanf("%d",&arrE[i].allowance);
	}
	//Yeu cau 2
	printf("\n---------------------Employee Details---------------------\n");
	printf("ID \tName \t\t\t\tSalary \tAllowance \tTotal Salary\n");
	for (i=1; i<=numE; i++)  
	{
		arrE[i].totalsalary = arrE[i].salary + arrE[i].allowance;
		printf("\r%d",arrE[i].empID);// \r de can le tr, \t phai printf tung phan de can dong
		printf("\t%-20s",arrE[i].empName);// %-20s de can le phai
		printf("\t%d",arrE[i].salary);
		printf("\t%d",arrE[i].allowance);
		printf("\t%d\n",arrE[i].totalsalary);
	}
}
