//C Assignment.pdf
//BT condition (Lab)
//Viet chuong trinh voi switch...case
#include<stdio.h>
#include<conio.h>

int main() {
	while (1 > 0) {
		printf("\nNhap a char or 'Q' or 'q' to quit:");
		char ch = getchar();
		fflush(stdin);
		switch(ch) {
			case 'A':
			case 'a':
				printf("Ada");
				break;
			case 'B':
			case 'b':
				printf("Basic");
				break;
			case 'C':
			case 'c':
				printf("Cobol");
				break;
			case 'D':
			case 'd':
				printf("dBasel III");
				break;
			case 'F':
			case 'f':
				printf("Fortran");
				break;
			case 'P':
			case 'p':
				printf("Pascal");
				break;
			case 'V':
			case 'v':
				printf("Visual C++");
				break;
			case 'Q':
			case 'q':
				printf("Bye!");
				return 0;
			default:
				printf("Just Input A,B,C,D,F,P,V or a,b,c,d,f,p,v!\n");
				printf("Please try again!\n");
				break;
		}
	}	
	return 0;
} 
