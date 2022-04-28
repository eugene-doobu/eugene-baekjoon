#include<stdio.h>
#include<math.h>
#include<string.h>
#include<limits.h>
#include<stdlib.h>


int main() {
    int in=0, A, B=0, A2=0, B2=0, C=0;
    scanf("%d", &in);
    if (in < 10) in *= 10;
    A = in;
    while(1){
    B = ((A / 10 % 10) + A % 10);
    A2 = (A % 10) *10;
    B2 = B % 10;
    A = A2 + B2;
    C++;
    if (A == in) break;
    }
    printf("%d",C);
    return 0;
}