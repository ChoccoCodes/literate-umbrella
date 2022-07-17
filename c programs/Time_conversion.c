#include <stdio.h>
int main(void)
{
int hours,minutes,seconds,total_seconds;
puts("A program to convert time in seconds.");
printf("Enter time in the following order: hours, minutes,seconds>>>");
scanf("%d %d %d", &hours,&minutes,&seconds);
total_seconds = ((hours*3600)+(minutes*60) + seconds);
printf("There are %d seconds.",total_seconds);
return(0);


}
