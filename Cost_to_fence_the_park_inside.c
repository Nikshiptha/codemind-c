#include<stdio.h>
int main()
{
    int L,B,W,C,totalcost,area;
    scanf("%d%d%d%d",&L,&B,&W,&C);
    if(L<=W+W || B<=W+W)
    {
        printf("Impossible");
    }   
    else
    {
    
        area=L*B-((L-2*W)*(B-2*W));
        totalcost=area*C;
        printf("%d",totalcost);
    }
    return 0;
}