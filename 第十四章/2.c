#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#define N 12
struct month
{
    char name[10];
    char abbrev[4];
    int days;
    int monumb;
};
struct month months[N] =
{
    {"January", "Jan", 31, 1},  {"February", "Feb", 28, 2},{"March", "Mar", 31, 3},    {"April", "Apr", 30, 4},
    {"May", "May", 31, 5},      {"June", "Jun", 30, 6},    {"July", "Jul", 31, 7},     {"August", "Aug", 31, 8},
    {"September", "Sep", 30, 9},{"October", "Oct", 31, 10},{"November", "Nov", 30, 11},{"December", "Dec", 31, 12}
};
void lunnian(int year);
int result(char *month, int days);

int main(void)
{
    int n, val;
    int day, year;
    char month[N];
    scanf("%d %11s %d", &day, month, &year);
    lunnian(year);
    val=result(month, day);
    printf("There are %d days from the beginning of %d to %s %d\n", val, year, month, day);
    months[1].days = 28; 

    return 0;
}

void lunnian(int year) 
{
    if ((year%4==0 && year%100 != 0) || year%400 == 0)months[1].days = 29;
}

int result(char *month, int days)
{
    int i,total = 0;
    for (i=0; i<N; i++)
    {
            total += months[i].days;
        }
}
