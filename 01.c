//write a function to calculate area of a circle (TSRS)
#include<stdio.h>
float AreaOfCircle (int);
int main()
{
    int radios;
    printf("\n Enter The Radios Of Circle : ");
    scanf("%d",&radios);

    printf("\n The area of circle %f having %d radios.\n",AreaOfCircle(radios),radios);
    return 0;
}

float AreaOfCircle (int x)
{
    float pi=3.14;
    return (pi*x*x);
}
