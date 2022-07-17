//WAP to check whether a 3 digit number is a magic number or not.
//(Palindrome) A number is a magic number if its reverse is same as the
//original number.
#include <stdio.h>
int main(void)
{
int a;
long int n,old,rev = 0;
printf("Enter any three digit number:>>>");
scanf("%ld",&n);
old = n;
do
{
a = n%10;
n = n/10;
rev = rev*10+a;
}while(n!=0);
if(old ==rev)
printf("PALINDROME");
else
printf("NOT PALINDROME");
return 0;

}
