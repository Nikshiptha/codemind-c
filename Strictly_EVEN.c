#include<stdio.h>
int main()
{
    int i,n,arr[100],c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    for(i=0;i<n;i++)
    {
        if(i%2)
        {
        if(arr[i]%2==0)
        {
            c++;
        }
        }
    }
    if(c==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}