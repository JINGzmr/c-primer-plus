# include <stdio.h>
int openbit(unsigned int n);
int main(void)
{
	int num ;
	scanf(" %d" , &num);
	while (getchar() != '\n') ;
	printf("%d中打开位一共有%d个\n",num,openbit(num));
	
	return 0 ;
}
 
int openbit(unsigned int n)
{
	int count = 0 ;
	while (n){
		count += (n & 1) ;
		n >>= 1 ;
	}
 
	return count ;
}