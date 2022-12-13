#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define N 12
struct month
{
    char name[10];
    char abbrev[4];
    int days;
    int num;
};
const struct month months[N] =
{
    {"January", "Jan", 31, 1},  {"February", "Feb", 28, 2},{"March", "Mar", 31, 3},    {"April", "Apr", 30, 4},
    {"May", "May", 31, 5},      {"June", "Jun", 30, 6},    {"July", "Jul", 31, 7},     {"August", "Aug", 31, 8},
    {"September", "Sep", 30, 9},{"October", "Oct", 31, 10},{"November", "Nov", 30, 11},{"December", "Dec", 31, 12}
};
int days(char *name);

int main(void)
{
    int total;
    char input[N];
    scanf("%11s", input);
    total = days(input);
    printf("当前天数为：%d\n", total);

    return 0;
}

int days(char *name)
{
    int i,total = 0;;
    int num1 = months[i].num;
    for (i = 0; i < num1; i++){
        total += months[i].days; 
    }

    return total;
}
