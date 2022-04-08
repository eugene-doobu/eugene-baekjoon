#include <iostream>
#include <cmath>

int main()
{
    int dia, xR, yR;
    scanf("%d %d %d", &dia, &xR, &yR);
    
    int pDia = dia * dia;
    int pR = xR * xR + yR * yR;
    double x = sqrt((double)pDia / pR);

    printf("%d %d\n", (int)(x * xR), (int)(x * yR));
    return 0;
}