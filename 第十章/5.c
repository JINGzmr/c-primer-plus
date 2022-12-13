#include <stdio.h>
#define N 6
double max1(const double a[], int n);
int main(void)
{
    double t;
    double a[N] = {1,2,9,8.88,27.98,0.00};
    t=max1(a, N);
    printf("差值是%g\n", t);

    return 0;
}

double max1(const double a[], int n)
{
    int i;
    double max = a[0];
    double min = a[0];
    for (i = 1; i < n; i++){
        if(a[i]>max) max=a[i];
        if(a[i]<min) min=a[i];
    }

    return max-min;
}