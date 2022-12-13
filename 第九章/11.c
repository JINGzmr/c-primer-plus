#include <stdio.h>
void Fibonacci(int n);
int main(void)
{
    int n;
    while (scanf("%d", &n) == 1)
    {
        Fibonacci(n);
    }

    return 0;
}

void Fibonacci(int n)
{
    int i;
    int t, x, y;
    x=y=1;

    for (i=0;i<n;i++){
        printf("%d\n", x);
        t = x + y;
        x = y;
        y = t;
    }
}

// int Fibonacci(int n)
// {
        // if(n>2)
//        return Fibonacci(n-1)+Fibonacci(n-2);
// }
