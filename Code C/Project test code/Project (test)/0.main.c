//On tap 1
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main() {
	while (1) {
		int cmd;
		display();
		printf ("\nEnter an Option: ");
		fflush(stdin);
		scanf("%d",&cmd);
		switch (cmd) {
			case 1:
				quest1();
				break;
			case 2: 
				quest2();
				break;
			case 3:
				quest3();
				break;
			case 4:
				quest4();
				break;
			case 5:
				printf("\nQuit!!!");
				exit(0);
			default:
				printf("Invalid!!!\n");
		}
	}
}
