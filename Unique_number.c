#include<stdio.h>
int main()
{
    int n,d,c=0,x[100],i,j,k;
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        n=n/10;
        x[i]=d;
        i++;
        
        
    }
    for(j=0;j<i;j++)
    {
        for(k=0;k<i;k++)
        {

        if(x[j]==x[k])
        {
            c++;
        }
    }
}
if(c==i)
{
    printf("Unique Number");
}
else
{
    printf("Not Unique Number");
}
}