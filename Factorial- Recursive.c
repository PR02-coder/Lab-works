// Recursive Function
#include<stdio.h>
void main()
{
    int factorialofno(int);
    printf("%d",factorialofno(5));
}
int factorialofno(int n)
{
    if(n==0)
        return 1;
    else
        return(n*factorialofno(n-1));
}
