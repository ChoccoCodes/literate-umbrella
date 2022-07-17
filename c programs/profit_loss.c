//selling price and cost price are input using the keyboard.
//Program determines whether the seller has made a profit or a loss.
//And by how much.

#include <stdio.h>
int main(void)
{
float cp,sp;
printf("Enter the cost price and the selling price of the item:");
scanf("%f%f",&cp,&sp);
if(sp>cp)
printf("profit is Rs. %.2f", sp-cp);

else if(sp>cp)
printf("loss is Rs. %.2f",cp-sp);

else 
printf("No Profit No Loss");

return 0;
}
