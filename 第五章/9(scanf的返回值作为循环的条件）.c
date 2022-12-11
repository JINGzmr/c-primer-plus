#include<stdio.h>
void temperatures(double h);
int main()
{
    double h,s,k;
    while(scanf("%lf",&h)){
       temperatures(h);
    }
    printf("结束\n");

    return 0;
}

void temperatures(const double h)
{
    printf("摄氏温度=%.2f°C\n",5.0/9*(h-32));
    printf("开氏温度=%.2f°C\n",5.0/9*(h-32)+273.16);
}

// #include <stdio.h>

// void Temperatures(double f_t);

// int main(void)
// {
//     double temp;

//     printf("Please enter a temperature number (q to quit): ");
//     while (scanf("%lf", &temp) == 1)
//     {
//         Temperatures(temp);
//         printf("You can enter again (q to quit): ");
//     }
//     printf("Done.\n");

//     return 0;
// }

// void Temperatures(double f_t)
// {
//     const double f_val = 32.0;
//     const double k_val = 273.16;
//     double t = 5.0 / 9.0 * (f_t - f_val);
//     //↑摄氏温度 = 5.0 / 9.0 * (华氏温度 - 32);
//     double k_t = t + k_val;
//     //↑开氏温度 = 摄氏温度 + 273.16;
//     printf("Centigrade temperature: %.2lf°C\n", t);
//     printf("Fahrenheit temperature: %.2lf°C\n", f_t);
//     printf("Kelvin temperature: %.2lf°C\n", k_t);

//     return;
// }
