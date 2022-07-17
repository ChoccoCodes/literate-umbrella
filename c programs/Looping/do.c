// This progaram illustrates a very basic do loop
#include <stdio.h>
int main(void)
{
int j = 5;
printf("Start\n");
do
printf("j = %i\n",j--);
while(j>0);
printf("stop\n");
return 0;
}
