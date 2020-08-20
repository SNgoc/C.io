//viet chuong trinh modifier
#include<stdio.h>
#include<conio.h>
int main() {
	printf("\nWithout modifier [%d]",555);
	printf("\n- modifier [%-d]",555);
	printf("\nfield modifier [%lld]",556464655);
	printf("\n0 modifier [%0d]",555);
	printf("\nfield and 0 modifier [%010d]",555);
	printf("\n- field and 0 modifier [%-010d]",555);
}
