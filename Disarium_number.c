#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,d,m,sum=0;
    scanf("%d",&n);
    m=n;
    d=(int)log10(n)+1;
    while(n>0)
    {
        r=n%10;
        sum=sum+ceil(pow(r,d));
        n=n/10;
        d--;
    }
    if(sum==m)
    printf("True");
    else
    printf("False");
}