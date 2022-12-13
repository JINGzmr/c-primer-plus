#include <stdio.h>
#define n(X, Y) (2.0 * (X) * (Y) / ((X) + (Y)))
int main(void)
{
    double x, y, a;
    scanf("%lf %lf", &x, &y);
    a=n(x, y);
    printf("%g = harmonic mean of %g %g.\n", a, x, y);
    
    return 0;
}
