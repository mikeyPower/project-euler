#include<stdio.h>

int sum_of_squares()
{
int i = 100;
int total = 0;
int square;

while(i > 0)
{
 square = i * i;
 total = total + square;
 i--;  

}

return total;
}

int square_of_sums()
{

int i = 100;
int total = 0;
int square;
while(i > 0)
{
 total = total + i;
 i--;  
}

return (total * total);
}

int main()
{
printf("\nThe result is %d\n\n", square_of_sums()-sum_of_squares());
return 0;
}
