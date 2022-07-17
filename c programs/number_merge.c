//This program merges three numbers into a single integer.
#include <stdio.h>
int main(void)
{
int merge, a,b,c;
printf("Enter three numbers here a,b,c:>>>");
scanf("%1d %1d %1d",&a,&b,&c);
merge = (a*100)+(b*10)+(c);
printf("Here's the merge of the 3 digits you typed:%3d",merge);
return(0);
}
