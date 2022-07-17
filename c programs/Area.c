#include<stdio.h>
#include <math.h>
#define PI 3.14;
int main(void)
{


float radius,area;

puts("This program calculates the area of a circle given the radius.");
printf("Enter the radius of your circle:");
scanf("%f", &radius);
area = 3.14*(radius)*(radius);
printf("The area of your circle is %8.2f sq units\n", area);
return (0);

}
