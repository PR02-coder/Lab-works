//Using Turnery operator
#include<stdio.h>
void main()
{
    int factorialofno(int);
    printf("%d",factorialofno(6));
}
int factorialofno(int n)
{
    return((n)?(n*factorialofno(n-1)):0);

}
