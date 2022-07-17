/*This program prints the average of two numbers.*/
#include <stdio.h>
int main (void)
{
int x,y,average;
printf("Enter two numbers x,y:");

scanf("%d %d",&x,&y);
average = ((x+y)/2);
printf("The average of the two numbers is %d\n",average);

return (0);

}
