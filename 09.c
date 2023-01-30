//write a TSRS function to check whether a given number contains a given digit or not.
#include<stdio.h>
int CheckDigit (int n, int d)
{
    int flag=0;
    while(n)
    {
        if((n%10)==d)
            return 1;
        n=n/10;
    }
    return 0;
}
int main()
{
    int n,d;
    printf("\nEnter any number : ");
    scanf("%d",&n);
    printf("\n\nEnter a digit to search in above entered number : ");
    scanf("%d",&d);

    if(CheckDigit(n,d))
        printf("\n\nYes %d is present in the number %d.\n\n",d,n);
    else
        printf("\n\nNo %d is not present in the number %d.\n\n",d,n);
    return 0;
}
