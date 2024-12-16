#include <stdio.h>  

#define MAX_SIZE 100  

void themPhanTu(int arr[], int *n, int giaTriMoi, int viTri) {  
    if (*n >= MAX_SIZE) return  
    if (viTri < 0 || viTri > *n) return  

    for (int i = *n; i > viTri; i--) {  
        arr[i] = arr[i - 1]  
    }  
    arr[viTri] = giaTriMoi  
    (*n)++  
}  

void inMang(int arr[], int n) {  
    for (int i = 0; i < n; i++) {  
        printf("%d ", arr[i])  
    }  
    printf("\n")  
}  

int main() {  
    int arr[MAX_SIZE] = {1, 2, 3, 4, 5}  
    int n = 5  

    int giaTriCanThem = 99  
    int viTriCanThem = 2  
    themPhanTu(arr, &n, giaTriCanThem, viTriCanThem)  

    printf("Mang sau khi them phan tu: ")  
    inMang(arr, n)  

    return 0  
}
