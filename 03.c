//TSRS function to check the number if it is odd or even. return 1 if number is even and 0 if number is odd
#include<stdio.h>
int IsEven (int x)
{
    return !(x&1);
}
int main()
{
    int num;
    printf("\n Enter a number to check whether the number is odd or even : ");
    scanf("%d",&num);
    if(IsEven(num))
        printf("\n\n %d is a EVEN number.\n\n",num);
    else
        printf("\n\n %d is a ODD number.\n\n",num);
    return 0;
}
