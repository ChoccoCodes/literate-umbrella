//Wap to check that Entered character is capital,small,digit,or a special symbol?
#include<stdio.h>
int main(void)
{
char ch;
printf("\n\t\t\t I'm Learning C with Harry's Book\n");
printf("\n\n\tEnter any character = ");
scanf("%c",&ch);
if(ch>=65&&ch<=90)
printf("\n\t character is uppercase");
else
if(ch>=97&&ch<=122)
printf("\n\t Character is lower case");
else
if(ch>=48&&ch<=65)
printf("\n\t character is a digit.");
else
printf("Character is a special symbol");
return 0;
}
