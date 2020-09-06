#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
/* Question 3. Using the array of the structure, write a program with following requirements:
- User to enter the number of employees  
- Then enter information for those employees (empID,empName,salary,allowance)  
- Finally, display the detailed: EmpID, EmpName, totalSalary = salary + allowance  
*/

void quest3()
{
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
		fflush(stdin);
		printf("Input Name: ");
		gets(arrE[i].empName);
		printf("Input Salary: ");
		scanf("%d",&arrE[i].salary);
		printf("Input Allowance: ");
		scanf("%d",&arrE[i].allowance);
	}
	//Yeu cau 2
	printf("\n---------------------Employee Details---------------------\n");
	printf("ID \tName \t\t\tSalary \t\tAllowance \tTotal Salary\n");
	for (i=1; i<=numE; i++) 
	{
		arrE[i].totalsalary = arrE[i].salary + arrE[i].allowance;
		printf("\r%-6d",arrE[i].empID);// \r de can le tr, \t phai printf tung phan de can dong
		printf("\t%-20s",arrE[i].empName);
		printf("\t%-10d",arrE[i].salary);
		printf("\t%-10d",arrE[i].allowance);
		printf("\t%-10d",arrE[i].totalsalary);
	}
	printf("\n");
}
