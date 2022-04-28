#include<stdio.h>
#include<math.h>
#include<string.h>
#include<limits.h>
#include<stdlib.h>


int main() {
    int input, input2, a;
    scanf("%d %d", &input, &input2);

    for (int i = 0; i < input; i++) {
        scanf("%d", &a);
        if (a < input2) printf("%d ", a);
    }
    return 0;
}