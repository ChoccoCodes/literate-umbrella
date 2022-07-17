//This program prints the reverse of a 3 digit number.
#include <stdio.h>

int main(void)
{
int number, a,b,c,reverse_number;
printf("Enter a three digit number:>>>");
scanf("%3d",&number);
a = number/100;
number = number%100;
b = number/10;
number = number%10;
c =number;
reverse_number = (c*100) + (b*10) + a;
printf("The reverse form of the typed number is: %3d",reverse_number);
return (0);

}

