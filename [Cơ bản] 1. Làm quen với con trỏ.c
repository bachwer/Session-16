#include <stdio.h>

int main(void) {
    int number = 5;
    int *Ptr = &number;
    printf("The address of variable number: %d\n", &number);
    printf("The address of variable number(Ptr): %d\n", Ptr);

    printf("value of variable number: %d\n", number);
    printf("value of variable number(Ptr):%d\n", *Ptr);
}
