#include <stdio.h>

int main(void)
{
int a,b,ch;
printf("Enter two numbers:");
scanf("%d%d",&a,&b);
printf("1:\tAdd\n2:\tSubtract\n3:\tMultiply\n4:\tDivide\n5:\tModulus\nEnter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("%d\n",a+b);
break;
case 2:
	printf("%d\n",a-b);
	break;
case 3:
printf("%d\n",a*b);
break;

case 4:
	printf("%f\n",(float)a/b);
	break;
	
case 5:
	printf("%d\n",a%b);
	break;
	
default:
	printf("Invalid Input");
	
}

return 0;
}
