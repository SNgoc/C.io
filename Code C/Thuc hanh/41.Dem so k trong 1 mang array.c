/*BT array: Nhap vao mang n phan tu, nhap 1 so k, dem so k xuat hien bao nhieu lan trong mang
*/
#include<conio.h>
#include<stdio.h>

int main() {
    int i, n, k;
    int arr[1000];
    printf("Enter a size of array:");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
    	printf("Nhap arr[%d]",i);
        scanf("%d", &arr[i]);
    }
    printf("Nhap so k: ");
    scanf("%d", &k);

    int count = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] == k) {
            count++;
        }
    }
    printf("So lan so k  xuat hien trong mang arr la %d", count);
    return 0;
}
