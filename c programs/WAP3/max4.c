//Program prints the maximum of four numbers.
#include <stdio.h>
int main(void)
{
int a,b,c,d;
printf("Enter four numbers:");
scanf("%d %d %d %d",&a,&b,&c,&d);
if(a<b && b>c &&b>d)
{
printf("Integer b is the maximum number.");
}
else if(b<a && a>c && a>d)
{
printf("Integer a is the maximum number.");
}
else if(b<c && c>a && c>d)
{
printf("Integer c is the maximum number.");
}
else if(b<d && c<d && b<d)
{
printf("Integer d is the maximum number.");
}
else
{
printf("The four integers entered are equal.");
}
return 0;
}
