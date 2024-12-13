#include <stdio.h>
//prototype function
void sum(int *num1, int *num2, int *result);

int main() {
    //declaer num1, num2, assign value
    int num1 = 23;
    int num2 = 12;
    int result;
    //Call the sum function
    sum(&num1, &num2, &result);

    printf("%d + %d = %d", num1, num2, result);

}
//Sum function
void sum(int *num1, int *num2, int *result) {
    *result = *num1 + *num2;
}
