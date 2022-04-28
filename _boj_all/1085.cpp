
#include <iostream>
using namespace std;

int main() {
    int x, y, w, h;
    scanf("%d %d %d %d", &x, &y, &w, &h);
    int min_ = min(min(x, w - x), min(y, h - y));
    printf("%d", min_);
}
