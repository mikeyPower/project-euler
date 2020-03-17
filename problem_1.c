#include<stdio.h>

int sum_numbers()
{
int i;
int total = 0;

for(i = 1; i < 1000; ++i)
{
  if(i % 3 == 0)
  {

   total = total + i; 
  }
  else if(i % 5 == 0)
  {
   total = total + i;

  }
}

return total;
}



int main()
{
printf("\nThe result is %d\n\n", sum_numbers());
return 0;
}
