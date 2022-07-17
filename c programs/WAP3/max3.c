//Program prints the maximum of three numbers.
#include <stdio.h>
int main(void)
{
int a,b,c;
printf("Enter three numbers:");
scanf("%d %d %d",&a,&b,&c);
if(a<b && b>c)
{
printf("Integer b is the maximum number.");
}
else if(b<a && a>c)
{
printf("Integer a is the maximum number.");
}
else if(b<c && c>a)
{
printf("Integer c is the maximum number.");
}
else
{
printf("The three integers entered are equal.");
}
return 0;
}
