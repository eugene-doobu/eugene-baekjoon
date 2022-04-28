#include<stdio.h>
#include<math.h>
#include<string.h>
#include<limits.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int i;
    int x[10];
    int Num_of_Remainder = 0;
    int duplicated_x[10];

    for (i = 0; i < 10; i++) {
        int check_same = 0;
        scanf("%d", x+i);
        duplicated_x[i] = x[i] % 42;

        for (int j = 0; j < i; j++) {
            if (duplicated_x[j] == duplicated_x[i]) {
                check_same++;
            }
        }

        if (check_same < 1) Num_of_Remainder++;
    }

    printf("%d\n", Num_of_Remainder);

    return 0;
}