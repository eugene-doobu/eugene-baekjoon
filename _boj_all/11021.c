#include<stdio.h>
#include<math.h>
#include<string.h>
#include<limits.h>
#include<stdlib.h>


int main() {
    int input, a, b;
    scanf("%d", &input);
    for (int i = 1; i <= input; i++) {
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d\n", i, a + b);
    }
    return 0;
}