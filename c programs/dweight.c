/*Computes the dimensional weight of a box from input provided by user.*/
#include <stdio.h>
#define INCHES_PER_POUND 166
int main(void)
{
int height,length,width,volume,weight;
printf("Enter height of the box:");
scanf("%d",&height);
printf("Enter the width of the box:");
scanf("%d",&width);
//printf("Enter the weight of the box:");
//scanf("%d",&weight);
printf("Enter the length of the box:");
scanf("%d",&length);

volume = length*width*height;
weight = (volume + INCHES_PER_POUND-1)/INCHES_PER_POUND;

printf("Volume (cubic inches):%d\n", volume);
printf("Dimensional weight (pounds): %d\n",weight);

return 0;
}