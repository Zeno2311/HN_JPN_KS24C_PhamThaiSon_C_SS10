#include <stdio.h>

int main() {
    int arr[6];
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Ban hay nhap 6 gia tri vao trong mang\n");
    for (int i = 0; i < n; i++) {
        printf("Moi ban nhap : ");
        scanf("%d", &arr[i]);
    }
    
    printf("Mang ban da nhap gia tri: ");
    for (int i = 0; i < n; i++) {
        printf("%2d ", arr[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        int min = i; 
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
            min = j; 
            }
        }
        if (min != i) {
            int check = arr[i];
            arr[i] = arr[min];
            arr[min] = check;
        }
    }
    
    printf("\nMang sau khi duoc sap xep la: ");
    for (int i = 0; i < n; i++) {
        printf("%2d ", arr[i]);
    }
    printf("\n");
    return 0;
}
