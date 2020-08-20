/* cho 3 bien a,b,c voi a,b là int, c la char
viet chuong trinh voi switch-case de khi nhap c la '+' se thuc hien phep tinh a+b */
#include<stdio.h>

int main() {
	int a,b;
	char c;
	printf("Nhap gia tri a,c,b voi a,b la int, c la char:");
	scanf("%d %c %d",&a,&c,&b);
	switch (c) {
		case '+':
			printf("%d %c %d = %d",a,c,b,a+b);
			break;
		case '-':
			printf("%d %c %d = %d",a,c,b,a-b);
			break;
		case '*':
			printf("%d %c %d = %d",a,c,b,a*b);
			break;
		case '/':
			printf("%d %c %d = %.3f",a,c,b,(float)a/b);
			break;
		default:
			// neu c khong co gia tri nao trong cac gia tri tren thi khoi lenh nay se duoc thuc thi
			printf("Sai gia tri");
			break;
	}
	return 0;
}
