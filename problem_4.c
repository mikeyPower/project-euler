#include<stdio.h>
#include <math.h>
#include <string.h>

int large_palindrome()
{
int first;
int second;
int largestPalindrome=0;
int product;
int digits[10]={ 0 };
int count;
int isPalindrome = 0; 
int i;

for(first = 100; first < 1000; ++first)
{
   for(second = 100; second < 1000; ++second)
   {
   product = first * second;
   count = 0;


   while (product > 0) {
    digits[count] = product % 10; //get last digit
    product = product / 10; 
    count = count + 1;
   }// end of first inner while loop


   i = 0;
   
   while(count-1 >=0){
  // printf("\n%d %d %d\n",first*second, digits[i],digits[count-1]);
  // printf("\n%d\n",count);
   if(digits[i] != digits[count-1]){
   isPalindrome = 0;
   break;
   }
   else{
   isPalindrome = 1;
   }
   i = i + 1;
   count = count -1;



   }//end of second inner while loop

   if((isPalindrome == 1) && ((first * second)> largestPalindrome))
    {
     largestPalindrome = first * second;
    }

   memset(digits, 0, 10);
   }//inner for loop


}// outer for loop
return largestPalindrome;
}// end of function

int main()
{
printf("\nThe result is %d\n\n", large_palindrome());
return 0;
}
