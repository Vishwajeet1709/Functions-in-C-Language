//TSRN function to print first natural numbers
#include<stdio.h>
void PrintNum (int n)
{
    int i;
    printf("\n\nFirst %d natural numbers : ",n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
    }
    printf("\n\n");
}
int main()
{
    int n;
    printf("\nEnter a number to print first n natural numbers : ");
    scanf("%d",&n);
    PrintNum(n);
    return 0;
}
