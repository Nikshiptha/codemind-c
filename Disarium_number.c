#include<stdio.h>
#include<math.h>
int main()
{
    int n,rev=0,d,s,dc=0,res=0,temp;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        d=n%10;
        n=n/10;
        rev=rev*10+d;
    }
    while(rev!=0)
    {
        s=rev%10;
        rev=rev/10;
        dc++;
        res=res+pow(s,dc);
    }
        
            if(temp==res)
            {
                printf("True");
            }
            else
            {
                printf("False");
            }
        }