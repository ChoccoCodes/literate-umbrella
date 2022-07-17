// This program calculates the real roots of the quadratic equation.
#include <stdio.h>
#include <math.h>

int main(void)
{
float a,b,c,d,r,l,r2;
printf("Enter three numbers:");
scanf("%f%f%f",&a,&b,&c);
d = b*b-(4*a*c);
if(d<0)
printf("roots are imaginary");

else
{
r = (-b+sqrt(d))/(2*a);
r2 = (-b+sqrt(d))/(2*a);
printf("The roots are %f%f",r,r2);
}
return 0;
}
