// Chuoi
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char name[10][12];
	char temp[12];
	int i, dung;
	for (i=0; i<10; i++){
		printf("\nEnter a name (Type END to stop) :");
		scanf("%s",name[i]);
		if (strcmp(name[i],"END") == 0 || strcmp(name[i],"end") == 0){//strcmp() la lenh so sanh chuoi
			dung = i;
			break;
		}
	}
	printf("\nThe list of names\n");
	for (i=0; i<dung; i++) {
		printf("%s\n",name[i]);
	}
	
	printf("\nTim va hien chuoi lon nhat trong cac chuoi\n");//code so sanh chuoi tren bang ma ASCII
	strcpy(temp,name[0]);
	i = 1;
	while (i<dung){
		if (strcmp(temp,name[i]) < 0) {
			strcpy(temp,name[i]);//strcpy la lenh copy chuoi strcpy(bien, bien duoc copy)
		}
		i++;
	}
	printf("The string is %s\n",temp);
}
