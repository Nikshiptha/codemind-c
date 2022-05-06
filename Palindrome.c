#include<stdio.h>
int main()
{
    int n,rev=0,original,rem;
    scanf("%d",&n);
    original=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(original==rev)
    printf("True");
    else
    printf("False");
}