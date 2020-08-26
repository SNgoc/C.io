//tim chuoi lon nhat
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main() {
	int i,dainhat;
	char lines[5][20];
	int longest(char[][20]);
	for (i=0; i<5; i++) {
		printf("\nEnter a value of lines[%d]: ",i);
		scanf("%s",lines[i]);
	}
	dainhat = longest(lines);
	printf("\nThe longest string is %s\n",lines[dainhat]);
}
int longest(char arr[][20]) {
	int i = 0; //chi muc cua mang
	int long_ctr = 0; // chi muc cua chuoi codo dai dai nhat can tim
	int prev_len, new_len; // 2 do dai cua cac chuoi de so sanh
	prev_len = strlen(arr[0]); // dau tien cho bang chuoi thu nhat
	for (i=1; i<4; i++) {
		new_len = strlen(arr[i]);
		if (new_len > prev_len) {
			long_ctr = i;
			prev_len = new_len;
		}
	}
	return long_ctr;
}
