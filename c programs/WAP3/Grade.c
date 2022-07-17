//This program evaluates grades given a student's score in a test.
#include<stdio.h>
int main(void)
{
int a;
printf("Enter your examination score>>>");
scanf("%d",&a);
if (a>= 90)
printf("Congratulations, you scored grade 'A'.");
else if(a>=70)
printf("You have scored grade 'B'.");
else if(a>=50)
printf("Your grade is 'C'.");
else
printf("You scored an 'F' bro");

return 0;

}
