//WAP using conditional operators to determine whether a year entered through the keyboard is a leap year or not.
#include <stdio.h>
int main(void)
{
int a;
printf("Enter your year of birth:>>");
scanf("%d",&a);
(a%4 ==0? printf("\nYou were born in a leap year"):printf("Your year of birth is ODD"));
return 0;
}
