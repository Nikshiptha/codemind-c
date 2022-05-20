 #include<stdio.h>
int main()
{
    int n,i,d,c=0;
    scanf("%d",&n);
    for(i=2;i<n;i++)

    {
        if(n%i==0)
        {
            c=c+i;
        }
    }
    if(c>n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}

