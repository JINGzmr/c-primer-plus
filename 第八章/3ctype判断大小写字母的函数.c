#include<stdio.h>
#include<ctype.h>
int main(void)
{
    char a;
    int big=0,small=0,oth=0;
    
    while((a=getchar())!=EOF)
    {
        if(isupper(a))big++;
        else if(islower(a))small++;
        else oth++;  //包括‘\n’
    }

    printf("大写%d、小写%d、其他%d\n",big,small,oth);
    
    return 0;
}