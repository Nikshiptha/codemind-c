#include<stdio.h>
int main()
{
    int product=1,result,sum=0,n,p;
    scanf("%d",&n);
    while(n)
    {
        p=n%10;
        n=n/10;
        product*=p;
        sum+=p;
        result=product-sum;
       }
printf("%d",result);
return 0;
    
}