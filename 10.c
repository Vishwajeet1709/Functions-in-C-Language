//write a TSRN function to print all the prime factors of a given number
#include<stdio.h>
void PrimeFact (int n)
{
    int i;
    printf("\n\nPrime factors of %d : ",n);
    while(n!=1)
    {
        for(i=2;i<=n;i++)
        {
            if(n%i==0)
            {
                printf(" %d",i);
                n=n/i;
                break;
            }
        }
    }
    printf("\n\n");
}
int main()
{
    int num;
    printf("\nEnter a number to print its prime factors : ");
    scanf("%d",&num);
    PrimeFact(num);
    return 0;
}
