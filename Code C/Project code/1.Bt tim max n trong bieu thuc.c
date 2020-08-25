/* Lap chuong trinh thuc hien cac cong viec sau:
- xac dinh so nguyen duong n lon nhat thoa man: 3n^5-317n < 5
	<=> 3n^4 - 317 < 5/n <=> n max khi 3n^4 - 317 = 0 <=>  max n^4 = 317/3
	vi n la so nguyen duong nen max n khi  
- tinh gia tri cua bieu thuc: y = sqrt(|z-1|) + 1/(z^2 + 1)
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void maxn() {
	int n,i,max;
	max = 0;
	for (n = 1; 1>0; n++ ) {
		i = pow(n,4);
		if (i <= 317/3) {
			max++;
		}
		else {
			break;
		}
	}
	printf("Max n: %lld\n",max);
}

int main() {
	maxn();
	long long x,n;
	scanf("%d",&n);
	x = 3*pow(n,5) - 317*n;
	printf("Result: %lld",x);
	
}
