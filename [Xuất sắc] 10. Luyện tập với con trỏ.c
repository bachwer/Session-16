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
        printf("nhap vi tri can xoa: ");
        scanf("%d", &pos);
        pos--;
        arrAdd(arr, pos, &n);

        for(int i = 0; i < n; i++) {
            printf("%d\t", arr[i]);
        }
    }
    void arrAdd(int *arr, int pos, int *n){
        for(int i = pos; i < *n; i++) {
            arr[i] = arr[i + 1];
            }
            *n = *n - 1;
        }
