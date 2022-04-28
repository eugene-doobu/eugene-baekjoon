
#include <iostream>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int money;
        int q = 0, d = 0, n = 0, p = 0;
        scanf("%d", &money);

        q = (int)(money / 25);
        money %= 25;
        d = (int)(money / 10);
        money %= 10;
        n = (int)(money / 5);
        money %= 5;
        p = (int)(money / 1);
        money %= 1;

        printf("%d %d %d %d\n", q, d, n, p);
    }
}

