/*BT array: Nhap vao mang n phan tu, nhap 1 so k, dem so k xuat hien bao nhieu lan trong mang
*/
#include<conio.h>
#include<stdio.h>

int main() {
    int i, n, k;
    int arr[1000];
    printf("Enter a size of array:");
    scanf("%d", &n);
    fflush(stdin);
    printf("Nhap so k: ");
    scanf("%d", &k);
    for (i = 0; i < n; i++) {//nhap phan tu arr
    	printf("Nhap arr[%d]",i);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {//lenh in array
    	printf("List of array: %d",arr[i]);
	}
    int count = 0;
    for (i = 0; i < n; i++) {//lenh dem so k
        if (arr[i] == k) {
            count++;
        }
    }
    printf("So k la: %d\n",k);
    printf("So lan %d xuat hien trong mang arr la %d",k,count);
    return 0;
}
