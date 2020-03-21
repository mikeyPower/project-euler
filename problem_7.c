#include<stdio.h>

int prime()
{
int i = 0;
int total;
int j;
int numm = 2;
int isPrime = 0;

while(i < 10001)
{

total = numm;
    for(j = 2; j<numm; j++)
    {
       if((numm % j) == 0)
        {
           isPrime = 1;
           break;

        }
        


    }
    if(isPrime == 0)
    {
   // printf("\n%d\n",numm);
    i++;
    }
    numm++;
    isPrime = 0;


}

return total;
}



int main()
{
printf("\nThe result is %d\n\n", prime());
return 0;
}
