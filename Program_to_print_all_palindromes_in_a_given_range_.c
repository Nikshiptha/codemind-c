#include<stdio.h>
int main()
{
    int n,m,p,temp,rem,rev;
    scanf("%d",&n);
    scanf("%d",&m);
    for(p=n;p<=m;p++)
    {
        temp=p;
        rev=0;
        while(temp)
        {
            rem=temp%10;
            temp=temp/10;
            rev=rev*10+rem;
        }
        if(p==rev)
        {
            printf("%d ",p);
        }
    }
}