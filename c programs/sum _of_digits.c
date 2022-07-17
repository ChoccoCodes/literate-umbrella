//This program calculates the number of digits of a three digit number.
#include <stdio.h>

int main(void)
{
int number,a,b,c,sum;	
printf("Enter any three digit number:>>");
scanf("%3d",&number);
a = number/100;
number = number%100;
b = number/10;
number = number%10;
c =number;
sum = (a+b+c);
printf("The sum of the three integers is %d:",sum);
return (0);
}
