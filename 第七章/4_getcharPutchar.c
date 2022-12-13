#include<stdio.h>
int main()
{
    char a;
    int n=0;

    //while(a=getchar()!='#')  //错
    while((a=getchar())!='#')
    {
        if(a=='.'){
            putchar('!');
            n++;
        }

        else if(a=='!'){
            //putchar('!!'); //错
            printf("!!");
            n++;
        }

        else putchar(a);

    }

    printf("\n替换的次数为%d\n",n);

    return 0;
}