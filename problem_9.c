#include<stdio.h>

int pythagorean_triplet()
{
int i;
int total = 0;
int j;
int k;


for(i = 1; (i*i) < 1000; i++)
{
    for(j =i+1 ; (j*j) < 1000; j++)
    {
          for(k=j+1; (k*k) < 1000; k++)
          {
            
              if( ((i*i)+(j*j)+(k*k)) == 1000)
               {
                   printf("\n%d^2 + %d^2 + %d^2 = 1000\n",i,j,k); 
                   return 0;
                   
               }

             
          }



    }
}

return total;
}



int main()
{
pythagorean_triplet();
return 0;
}
