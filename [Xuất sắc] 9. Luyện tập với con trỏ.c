#include <stdio.h>

void arrAdd(int *arr, int pos, int *n);

int main(void) {
    int arr[8] = {1,2,4,5,6,7,8,9};
    int pos;
    int n = sizeof(arr) / sizeof(int);

    for(int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    printf("nhap vi tri can them: ");
    scanf("%d", &pos);
    pos--;
    arrAdd(arr, pos, &n);

    for(int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
}
void arrAdd(int *arr, int pos, int *n){
    for(int i = *n; i >= 0; i--) {
        arr[i + 1] = arr[i];
        if(*(arr + i) == pos) {
            printf("Nhap gia tri them: ");
            scanf("%d", &*(arr + pos));
            *n = *n + 1;
            break;
        }
    }
}
