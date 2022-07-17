//WAP to Print the sequence 1, 2, 3, 4, 5,..............N
#include <stdio.h>
int main(void)
{
int i, n;
printf("Enter any integer N:>>");
scanf("%d",&n);
i = 1;
do
{
printf("%d",i);
i++;
}
while(i<=n);
printf("\b"); /*to remove the comma (,) printed at the last*/
return 0;
}
