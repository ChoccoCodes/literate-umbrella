//This program computes Mr.Harish's gross salary given:
//DA is 40% of basic salary,
// HRA is 20% of basic  salary.
// And the basic salary is the user's input.
//BS & GS will be used to denote basic salary and gross salary respectively.

#include<stdio.h>
int main(void)
{
int BS,GS,DA,HRA;
printf("Enter your basic salary here, Mr.Harish:>>>");
scanf("%d",&BS);
HRA = 0.4*BS;
DA = 0.2*BS;
GS = BS+HRA+DA;
printf("Your gross salary is:%d",GS);
return(0);
}
