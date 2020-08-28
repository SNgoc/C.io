//tinh so lon coca doi voi x chai, doi y vo chai duoc 1 chai nguyen
#include<stdio.h>
#include<conio.h>
int numCoca(int x, int y) {
    int n;
    n = x;
    while (x >= y) {
        n += (x/y);
        x = (x/y) + (x%y);
    }
    return n;
}
int main() {
	int a,b;
	printf("Nhap so chai coca a va so b chai can de doi 01 chai: \n");
	scanf("%d %d",&a,&b);
	printf("\ntong so chai uong va doi la: %d",numCoca(a,b));
}
