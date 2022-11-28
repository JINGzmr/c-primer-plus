#include<stdio.h>
int main(void)
{
    double a;
    printf("Enter a floating-point value:");
    scanf("%lf",&a);
    printf("fixed-point notation : %f\n",a);
    printf("exponential notation : %e\n",a);
    printf("p notation : %a\n",a);//%a——打印成十六进制形式（p计数法）

    return 0;
}