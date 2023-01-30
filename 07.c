//TSRS function to calculate the way of selecting r objects out of n objects [c(n,r)=n!/(n-r)!*r!]
#include<stdio.h>
int fact (int f)
{
    int i,fac=1;
    for(i=1;i<=f;i++)
    {
        fac=fac*i;
    }
    return (fac);
}
float sellection (int x, int y, int z)
{
    float select;
    select=x/(y*z);
    return select;
}
int main()
{
    int n,r,a,b,c;
    printf("\n\nEnter total number of objects : ");
    scanf("%d",&n);
    printf("\n\nEnter how many objects you want to select from %d objects : ",n);
    scanf("%d",&r);
    if(n==r)
        printf("\n\nYou have only one way.\n\n");
    else if(r>n)
        printf("\n\nInvalid choice!!!\n\n");
    else
    {
        a=fact(n);
        b=fact(n-r);
        c=fact(r);
        printf("\n\nWell you have %.2f ways to select %d objects from %d objects.\n\n",sellection(a,b,c),r,n);
    }
    return 0;
}
