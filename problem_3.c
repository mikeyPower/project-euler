#include<stdio.h>
#include <math.h>

/*
It is best to start working from the smallest prime number, which is 2, so let's check:

12 ÷ 2 = 6

Yes, it divided exactly by 2. We have taken the first step!

But 6 is not a prime number, so we need to go further. Let's try 2 again:

6 ÷ 2 = 3

Yes, that worked also. And 3 is a prime number, so we have the answer:

12 = 2 × 2 × 3

As you can see, every factor is a prime number, so the answer must be right.
*/ 

long long int prime_factor()
{
long long int numm = 600851475143;
long long int newnumm = numm;
long long int largestFact = 0;
 
int counter = 2;
while (counter * counter <= newnumm) {
    if (newnumm % counter == 0) {
        newnumm = newnumm / counter;
        largestFact = counter;
    } else {
        counter++;
    }
}
if (newnumm > largestFact) { // the remainder is a prime number
    largestFact = newnumm;
}
return largestFact;
}

int main()
{
printf("\nThe result is %lld\n\n", prime_factor());
return 0;
}
