#include<stdio.h>

long long int fib()
{
long long int tmp;
long long int i;
long long int first = 1;
long long int second = 2;
long long int total = 0;

while(second < 4000000)
{
  if(second % 2 == 0)
  {

   total = total + second;
  }
tmp = first;
first = second;
second = second + tmp;
 
}

return total;
}



int main()
{
printf("\nThe result is %lld\n\n", fib());
return 0;
}
