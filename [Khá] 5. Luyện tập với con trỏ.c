#include <stdio.h>
#include <string.h>
//portotpye function
void arrUpd(int *arr, int value, int pos);

int main() {
    //declare array and value, pos variable and assign
    int arr[5] = {5,4,3,7,1};
    int value;
    int pos;
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter update value: ");
    scanf("%d", &value);

    printf("Update location: ");
    scanf("%d", &pos);


    arrUpd(arr, value, pos);


    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
}


void arrUpd(int *arr, int value, int pos){
    for(int i = 0; i <= pos; i++) {
        if(*(arr + i) == pos) {
            *(arr + pos - 1) = value;
        }
    }
}
