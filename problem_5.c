#include<stdio.h>

int sum_numbers()
{

int div = 20;
int numm = 20;
int tmp;

while(div != 0)
{
   if(numm % div == 0)
   {
   div = div -1;
   
   }
   else
   {
   numm = numm + 20;
   div = 20;
   }
}
return numm;
}



int main()
{
printf("\nThe result is %d\n\n", sum_numbers());
return 0;
}
