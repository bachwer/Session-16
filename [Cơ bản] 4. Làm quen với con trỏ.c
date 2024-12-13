#include  <stdio.h>
//prototpye function
void arrOutput(int *arr, int n);

int main(void) {
    //Declare arry and assign for array
    int arr[5] = {1, 2, 3, 4, 5};
    //length of array
    int n = sizeof(arr) / sizeof(int);
    //Call the function
    arrOutput(arr, n);
}
//function
void arrOutput(int *arr, int n){
    for(int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, *(arr + i));
    }
}
