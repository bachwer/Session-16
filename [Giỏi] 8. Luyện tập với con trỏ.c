#include <stdio.h>
#include <string.h>


void reString(char *arr, char *reverseString, int n);
int main() {
    char stringInput[100];
    char reverseString[100];
    printf("Nhap linh tin: ");
    fgets(stringInput, 100, stdin);
    int n  = strlen(stringInput);

    reString(stringInput, reverseString, n);
    for(int i = 0; i < n ; i++) {
        printf("%c", reverseString[i]);
    }
}

void reString(char *arr, char *reverseString, int n) {
    int temp = 0;
    for(int i = 0; i < n ; i++) {
        reverseString[i] = arr[n - i - 1];
    }
}
