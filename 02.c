//TSRS function to calculate simple interest
#include<stdio.h>
float sip (float,float,float);
int main()
{
    float p,t,r;
    printf("\n\nEnter Principal amount to calculate simple interest : ");
    scanf("%f",&p);
    printf("\n\nNow enter rate of interest : ");
    scanf("%f",&r);
    printf("\n\nNow enter time duration of loan (in years) : ");
    scanf("%f",&t);

    printf("\n\nSimple interest of %.2f /- rupees for %.2f year(s) at the rate of %.2f %% is equal %.2f\n\n",p,t,r,sip(p,r,t));
    return 0;
}
float sip (float p, float r, float t)
{
    float i;
    i=(p*r*t)/100;
    return i;
}
