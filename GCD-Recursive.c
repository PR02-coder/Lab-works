#include<stdio.h>
void main()
{
    int factorialofno(int x,int y);
    printf("%d",gcd(30,25));
}

int gcd(int x,int y)
{
    if(y==0)
        return x;
    else
        return gcd(y,x%y);

}
