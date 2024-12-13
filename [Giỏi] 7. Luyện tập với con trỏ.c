#include <stdio.h>

void arrArrange(int *arr);

int main(void) {
    int arr[10] = {9,8,7,6,5,4,3,2,1,0};
    int n = sizeof(arr) / sizeof(int);
    printf("Before arrange: \n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    arrArrange(arr);
    printf("\n");
    printf("After arrange: \n");
    for(int i = 0; i < n ; i++) {
        printf("%d ", arr[i]);
    }
}

void arrArrange(int *arr) {
    int index = 1;
    for(int n = 1; *(arr + n) != NULL; n++) {
        index++;
    }
    for(int i = 1; i <= index; i++) {
        int key = *(arr + i);
        int j = i - 1;
        while(j >= 0 && *(arr + j) > key) {
            *(arr + j + 1) =  *(arr + j);
            j--;
        }
        *(arr + j + 1) = key;
    }
}
