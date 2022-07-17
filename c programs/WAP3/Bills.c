//WAP to compute the tel. bill of a customer. Montly Rental Rs.100.Rates are as follows.
#include <stdio.h>
#include<math.h>
int main(void)
{
int x;
printf("enter the number of calls you have made this month>>>");
scanf("%d",&x);
if (x <= 100)
printf("Your bill is Rs.0");
else if( x <=200 && x>=101)
printf("Your bill is int(0.80*%d)",x);
else if(x <=500 && x>= 201)
printf("Your bill is int(1.0*%d)",x);
else 
printf("Your bill is int(1.2*%d)",x);

return 0;

}
