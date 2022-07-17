#include stdio.h>
//This program prints user output.
int main(void)
{
	//Prompt user for an answer
	printf("Answer:\n");
	char c = scanf("%c\n",&c);
	 //check answer
	 if (c=='Y'|| 'y')
	 {
		 printf("yes\n");
	 }
	 else if (c == 'N' || c =='n')
	 {
	 printf("no\n");
 }
	}
	
