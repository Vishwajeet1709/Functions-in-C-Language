//TSRS function to calculate factorial of a given number
#include<stdio.h>
int fact (int n)
{
    int i,fact=1;
    if(n==0||n==1)
        return 1;
    else
    {
        for(i=2;i<=n;i++)
        {
           fact=fact*i;
        }
        return fact;
    }
}
int main()
{
    int n;
    printf("\n\nEnter a number to calculate factorial : ");
    scanf("%d",&n);
    printf("\n\nThe factorial of %d is %d.\n\n",n,fact(n));
    return 0;
}
