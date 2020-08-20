//Viet chuong trinh nhap tu ban phim so nguyen n voi n phan tu arr[1000] va so nguyen k nhap tu ban phim, sau do dem xem trong arr co bao nhieu so = so k


#include<stdio.h>

int main() {
    int arr[1000];
    int n,k,i;
    scanf("%d %d",&n,&k);
    int count = 0;
    for (i = 0; i < n; i++){
        scanf("%d",&arr[i]);
        if (arr[i] == k){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}

