#include <stdio.h>  

#define MAX_SIZE 100  

void xoaPhanTu(int arr[], int *n, int viTri) {  
    if (viTri < 0 || viTri >= *n) return;  

    for (int i = viTri; i < *n - 1; i++) {  
        arr[i] = arr[i + 1];  
    }  
    (*n)--;  
}  

void inMang(int arr[], int n) {  
    for (int i = 0; i < n; i++) {  
        printf("%d ", arr[i]);  
    }  
    printf("\n");  
}  

int main() {  
    int arr[MAX_SIZE] = {1, 2, 3, 4, 5};  
    int n = 5;  

    int viTriCanXoa = 2;  
    xoaPhanTu(arr, &n, viTriCanXoa);  

    printf("Mang sau khi xoa phan tu: ");  
    inMang(arr, n);  

    return 0;  
}
