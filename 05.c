//TSRN function to print first n odd natural numbers
#include<stdio.h>
void PrintOdd (int n)
{
    int i;
    printf("\n\nFirst %d odd natural numbers : ",n);
    for(i=1;i<=n*2;i+=2)
        {
            printf(" %d",i);
        }

    printf("\n\n");
}
int main()
{
    int n;
    printf("Enter a number to print first n odd natural numbers : ");
    scanf("%d",&n);
    PrintOdd(n);
    return 0;
}
