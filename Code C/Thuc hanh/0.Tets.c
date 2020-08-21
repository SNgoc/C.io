/*Nhap chuoi
Vong lap chay tren chuoi, dung ham strlen(chuoi) de ktra dieu kien thoat
cho bien dem (dem chu nguyen am) = 0
trong vong lap, lay ky tu, chay cu phap switch..case 'a','e','o','i','u' tang bien dem
Het vong lap in ra bien dem
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int i;
	int demWo = 0;
	char str[15];
	char ch;
	while(1>0)
	{
		demWo = 0;
		printf("Enter a string to count vowel (Nhap vao 1 so nguyen am): ");
		scanf("%s",str);
		fflush(stdin);
		for (i = 0; i < strlen(str); i++)
		{
			switch(str[i])
			{
				case 'a':
				case 'e':
				case 'o':
				case 'i':
				case 'u':
					demWo++;
					break;
			}
		}
		printf("\nNumber of vowels is: %d\n",demWo);
	}
}
