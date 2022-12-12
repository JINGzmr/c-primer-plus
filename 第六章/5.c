#include<stdio.h>
int main()
{
    char x;
    scanf("%c",&x);
    int i,j,k,n=x-'A';
    for(i=0;i<=n;i++){
        for(j=0;j<n-i;j++){
            printf(" ");
        }
        for(k=0;k<=i;k++){
            printf("%c",'A'+k);
        }
        for(k=k-2;k>=0;k--){
            printf("%c",'A'+k);
        }
        
        printf("\n");
    }

    return 0;
}