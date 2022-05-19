#include<stdio.h>
#include<math.h>
int main()
{
    int n,sq,q,s=0,temp,d;
    scanf("%d",&n);
    sq=n*n;
    temp=n;
    while(sq!=0)
    {
        d=sq%10;
        sq=sq/10;
        s=s+d;
    }
    if(temp==s)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}
