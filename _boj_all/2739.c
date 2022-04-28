#include<stdio.h>
#include<math.h>
#include<string.h>
#include<limits.h>
#include<stdlib.h>


int main() {
    int num1;
    scanf("%d", &num1);
    for (int i = 1; i <= 9; i++)
    {
        printf("%d * %d = %d\n", num1, i, num1 * i);
    }
    return 0;
 }