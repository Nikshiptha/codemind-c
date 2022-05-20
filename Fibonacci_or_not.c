#include<stdio.h>
int main()
{
    int a,b,c,n,i;
    scanf("%d",&n);
    a=0;
    b=1;
    c=0;
    while(c<n)
    {
        a=b;
        b=c;
        c=a+b;
    }
    if(c==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}