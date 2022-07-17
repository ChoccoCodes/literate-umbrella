//This program prints cash breakdown for user input
#include <stdio.h>
int main(void)
{
	int a,b,c,d,e,f,g,h,i,m;
	printf("Enter the amount of money you have made this month:\n");
	scanf("%d",&m);

	
	a = m/1000;
	m = m%1000;
	
	b = m/500;
	m = m%500;
	
	c = m/200;
	m = m%200;
	
	d = m/100;
	m = m%100;
	
	e = m/50;
	m = m%50;
	
	f = m/20;
	m = m%20;
	
	g = m/10;
	m = m%10;
	
	h = m/5;
	m = m%5;
	
	i = m/1;
	
	printf(" The denominations of the given money are\n\1000X %2d\n500X %2d\n200X%2d\n100X%2d\n50X%2d\n20X%2d\n10X%2d\n5X%2d\n  1X%2d",a,b,c,d,e,f,g,h,i);
	return(0);
	}
