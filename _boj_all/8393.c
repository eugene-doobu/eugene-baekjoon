#include<stdio.h>
#include<math.h>
#include<string.h>
#include<limits.h>
#include<stdlib.h>


int main() {
    int input, sum = 0;
    scanf("%d", &input);
    for (int i = 1; i <= input; i++) {
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
 }