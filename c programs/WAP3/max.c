//Program prints the maximum out of two numbers.
#include <stdio.h>
int main(void)
{
int a,b;
printf("Enter two numbers:");
scanf("%d %d",&a,&b);
if(a<b)
printf("Integer b is the maximum number.");
else if(b<a)
printf("Integer a is the maximum number.");
else
printf("The two integers entered are equal.");


return 0;
}
