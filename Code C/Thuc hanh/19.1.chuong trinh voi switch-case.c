//C Assignment.pdf
//BT condition (Lab)
//Viet chuong trinh voi switch...case
#include<stdio.h>
#include<conio.h>

int main() {
	printf("Nhap a char:");
	char ch = getchar();
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
		default:
			printf("Just Input A,B,C,D,F,P,V or a,b,c,d,f,p,v!");
			printf("Please try again!");
			break;
	}
	return 0;
} 
