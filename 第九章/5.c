#include <stdio.h>
void larger_of(double *x, double *y);
int main(void)
{
    double a, b;

    while (scanf("%lf %lf", &a, &b) == 2)
    {
        larger_of(&a, &b);
        printf("a:%f b:%f\n", a, b);
    }

    return 0;
}

void larger_of(double *x, double *y)
{
    if(*x>*y)*y=*x;
    else *x=*y;
}
