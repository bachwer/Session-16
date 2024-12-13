#include<stdio.h>

void num1(int *arr, int num, int n);

int main(void) {
    int arr[5] = {4, 5, 6, 5, 3};
    int num;
    int n = sizeof(arr) / sizeof(int);
    printf("Nhap phan tu can tim: ");
    scanf("%d", &num);
    num1(arr, num, n);
}
void num1(int *arr, int num, int n) {
    int check = 0;
    for(int i = 0; i < n; i++) {
        if(*(arr + i) == num) {
            printf("phan tu %d, tai vi tri %d\n", num, i);
            check = 1;
        }
    }
    if(check == 0) {
        printf("Phan tu khong ton tai: ");
    }
}
