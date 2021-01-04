#include <stdio.h>
#include <conio.h>

int simpleArraySum (int n) {
    int i;
    int arr[1000];
    printf("Nhap so phan tu mang n: ");
    scanf("%d", &n);
    fflush(stdin);
    int sum = 0;
    for ( i = 1; i <= n; i++)
    {
        /* code */
        printf("Nhap phan tu a[%d]: ", i);
        scanf("%d", &arr[i]);
        fflush(stdin);
        sum += arr[i];
    }
    printf("Sum cua %d phan tu la: %d", n, sum);
}

int main() {
    simpleArraySum(6);
}