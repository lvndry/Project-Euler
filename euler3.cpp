#include <stdio.h>
#define NUMBER  600851475143

void highest_prime_factor(long long number){

int i = 3; // start at 3 for primes... we can do this since subject is ODD
int high = 0;

while (1){
	while (!(number % i)){ // while no remainder
   		number /= i;  // divide and replace
   		high = i; 
  	}
  	if (number == 1)
   		break;
  i += 2 ; // skip all even numbers since not prime
 }
 printf ("Highest prime factor of %lld is %d\n", NUMBER, high);
}

int main(int argc, char const *argv[])
{
	highest_prime_factor(NUMBER);
	return 0;
}