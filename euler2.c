 /*
	Landry Monga
	October 2017

	Project Euler 2
	Solution : 4613732
	
	Comment:	
	Here I sum all the even numbers of the Fibonacci sequence (below 4000000)
 */

#include <stdio.h>

#define LIMIT 4000000

int main(int argc, char const *argv[])
{
	long fibonacci[3];
	long sum = 0;

	fibonacci[0] = 1;
	fibonacci[1] = 2;
	fibonacci[2] = 0;

	sum = fibonacci[1];

	while(fibonacci[2] < LIMIT){
		fibonacci[2] = fibonacci[1] + fibonacci[0]; //Iterative fibonnaci sequence
		fibonacci[0] = fibonacci[1];
		fibonacci[1] = fibonacci[2];

		if(fibonacci[2] % 2 == 0){
			sum += fibonacci[2];
		}
		printf("%ld\n", fibonacci[2]);
	}	

	printf("Sum of even numbers of Fibonacci sequence : %ld\n", sum);

	return 0;
}
