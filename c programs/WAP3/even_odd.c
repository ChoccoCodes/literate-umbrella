//This program checks whether the number input throuh the keyboard,
//is odd or even.
#include <stdio.h>
int main(void)
{
int a;
printf("Enter a number:\n");
scanf("%d ",&a);
if (a%2 == 0)
printf("The number entered is even.");
else
printf("The number is odd.");
return 0;
}
