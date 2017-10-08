/*
	Landry Monga
	October 2017
	
	Solution: 6857

	Explanations:
	Iteration 1: Does 2 divide 147 ? No, increase Integer. 
	Iteration 2: Does 3 divide 147 ? Yes, so divide by 3. 
	Iteration 3: Does 3 divide 49 ? No, increase Integer.
	Iteration 5: Does 5 divide 49 ? No, increase Integer. 
	Iteration 7: Does 7 divide 49 ? Yes, so divide by 7. 
	Iteration 8: Does 7 divide 7 ? Yes, so divide by 7.
	Iteration 9: Does 7 divide 1 ? No. Subject equals 1. 
	Highest prime that divides 147 is 7. 
*/

#include <stdio.h>
#define NUMBER  600851475143

void highest_prime_factor(long long number){
	
	int i = 3; //start at 3 for primes
	int high = 0;

	while (number != 1){
		while (!(number % i)){ // while no remainder
   			number /= i;  // divide and replace
   			high = i; 
  		}
  		i += 2 ; // skip all even numbers since not prime
 	}
 	printf ("Highest prime factor of %lld is %d\n", NUMBER, high);
}

int main(int argc, char const *argv[])
{
	highest_prime_factor(NUMBER);
	return 0;
}