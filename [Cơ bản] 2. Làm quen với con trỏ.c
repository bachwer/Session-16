#include <stdio.h>

void swap(int *num1, int *num2);

int main(void) {
    // declear num1, num2 and assgin value
    int num1 = 1;
    int num2 = 2;
    //print num1, num2 before swap
    printf("num1: %d\n", num1);
    printf("num2: %d\n", num2);

    //function sawp
    swap(&num1, &num2);

    //print num1, num2 after sawp
    printf("num1: %d\n", num1);
    printf("num2: %d\n", num2);
}

//funcstion sawp
void swap(int *num1, int *num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
