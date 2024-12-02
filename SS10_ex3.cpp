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

    for (int i = 1; i < n; i++) {
        int check = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > check) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = check;
    }

    printf("\nMang sau khi duoc sap xep la: ");
    for (int i = 0; i < n; i++) {
        printf("%2d", arr[i]);
    }

    return 0;
}
