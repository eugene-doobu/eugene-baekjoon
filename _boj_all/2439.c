#include<stdio.h>
#include<math.h>
#include<string.h>
#include<limits.h>
#include<stdlib.h>


int main() {
    int input;
    scanf("%d", &input);

    for (int i = 1; i <= input; i++) {
        for (int j = input; j > i ; j--) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}