#include <stdio.h>
void fun(int *x);
int main(void)
{
    int x;
    scanf("%d", &x);
    while (x!=36){
        fun(&x);
    }
    printf("ok!\n");

    return 0;
}

void fun(int *x)
{
    scanf("%d", x);
}
