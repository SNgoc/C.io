//On tap 3
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
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
