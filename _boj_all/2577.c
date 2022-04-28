#include<stdio.h>
#include<math.h>
#include<string.h>
#include<limits.h>
#include<stdlib.h>
#include<time.h>

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

int minof(const int a[], int n) {
    int i;
    int min = a[0];
    for (i = 1; i < n; i++)
        if (a[i] < min) min = a[i];
    return min;
}

int main() {
    int i;
    int x[3];
    int Number_of_0to9[10] = { 0, };
    unsigned int ABC=0;
    int first_num = 1;

    scanf("%d", x);
    scanf("%d", x+1);
    scanf("%d", x+2);
    
    ABC = x[0] * x[1] * x[2];


    while (ABC) {
        first_num = ABC % 10;
        ABC /= 10;
        Number_of_0to9[first_num]++;
    }

    for (i = 0; i <= 9; i++) {
        printf("%d\n", Number_of_0to9[i]);
    }


    return 0;
}