#include<stdio.h>
int main()
{
    char x,y;
    scanf("%c",&x);
    y=x;
    int i,j,t,n=x-'A';
    // printf("%d",n);
    // printf("%c",x-1);
    for(i=1;i<=n+1;i++){
        t=i;
        x=y;
        while(t>0){
            printf("%c",x);
            x--;
            t--;
        }
        printf("\n");
    }

    return 0;
}


// #include<stdio.h>
// int main()
// {
//     char a[27]="ABCDEFGHIJKLMNOPPQRSTUVWXYZ";
//     char x;
//     scanf("%c",&x);
//     int i,j,n=x-'A',t;
//     int y=n;
//     for(i=n;i>=0;i--){
//         t=y-i+1;
//         n=y;
//         while(t>0){
//             printf("%c",a[n]);
//             n--;
//             t--;
//         }
//         printf("\n");
//     }

//     return 0;
// }