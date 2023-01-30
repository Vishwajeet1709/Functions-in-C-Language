//TSRS function to find the combinations(arrangements) of r objects from n objects
#include<stdio.h>
int arrange (int, int);
int fact (int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int n,r;
    printf("\n\nEnter the total number of objects : ");
    scanf("%d",&n);
    printf("\n\nEnter the numbers of object want to arrange from %d objects : ",n);
    scanf("%d",&r);

    printf("\n\nIn %d ways we can arrange %d objects from %d objects.\n\n",arrange(n,r),r,n);
    return 0;
}
int arrange (int n, int r)
{
    return (fact(n)/fact(n-r));
}
