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
    for (i = 1; i < n; i++)
        if (a[i] > max) max = a[i];
    return max;
}

int minof(const int a[], int n) {
    int i;
    int min = a[0];
    for (i = 1; i < n; i++)
        if (a[i] < min) min = a[i];
    return min;
}

int main() {
    int i;
    int* x;
    int number_of_x;

    scanf("%d", &number_of_x);
    x = calloc(number_of_x, sizeof(int));

    for (i = 0; i < number_of_x; i++) {
        scanf("%d", &x[i]);
    }

    printf("%d ", minof(x, number_of_x));
    printf("%d ", maxof(x, number_of_x));

    free(x);

    return 0;
}