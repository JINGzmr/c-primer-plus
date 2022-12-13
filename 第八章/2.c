#include<stdio.h>
int main()
{
    char a;
    int n=0;

    while((a=getchar())!=EOF)
    {
        if(n==10){
            printf("\n");
            n=0;
        }
        n++;

        if(a>=' '){
            printf("'%c'-%3d  ",a,a);
        }

        else if(a=='\n'){
            printf("\n");
        }

        else if(a=='\t'){
            printf("\t");
        }

        else printf("'%c'-^%c",a,a+'A'-1);
    }

    return 0;
}