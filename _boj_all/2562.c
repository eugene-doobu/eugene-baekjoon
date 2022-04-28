#include<stdio.h>
#include<math.h>
#include<string.h>
#include<limits.h>
#include<stdlib.h>
#include<time.h>

#define swap(type, x, y) do{ type t=x; x=y; y=t;} while(0)

int maxof(const int a[], int n) {
    int i;
    int max = a[0];
    int where_is_the_max = 1;

    for (i = 1; i < n; i++)
        if (a[i] > max) {
            max = a[i];
            where_is_the_max = i + 1;
        }
    return where_is_the_max;
}

int main() {
    int i;
    int x[9];
    int number_of_x = 9;
    int maxmax = 0;

    for (i = 0; i < 9; i++) {
        scanf("%d", &x[i]);
    }

    maxmax = maxof(x, number_of_x);

    printf("%d\n", x[maxmax-1]);
    printf("%d", maxmax);

    return 0;
}