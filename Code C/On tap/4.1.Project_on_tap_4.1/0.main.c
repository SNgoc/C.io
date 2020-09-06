//On tap 4
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
				printf("\nQuit!!!");
				exit(0);
			default:
				printf("Invalid!!!\n");
		}
	}
}
