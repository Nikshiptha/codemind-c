#include<stdio.h>
int main()
{
    int n,a,i;
    scanf("%d %d",&n,&a);
    for(i=0;i<=a;i++)
    {
        if(i%2!=0)
        {
            printf("%d x %d = %d
",n,i,n*i);
        }
    }
    return 0;
}