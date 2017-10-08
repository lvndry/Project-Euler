/*
	Landry Monga
	October 2017
	
	Project Euler 1
	Solution : 233168

	Comment : 
	Here I wanted to show how the perfomance is impacted even by simple algorithm.
	The first algorith takes 23ms to run and the second one 10ms so more than half less.
	
	The perfomance difference is due to branch prediction optimisation in the second program.
	I let you read more about the subject here : 
		https://en.wikipedia.org/wiki/Branch_predictor
		https://stackoverflow.com/questions/11227809/why-is-it-faster-to-process-a-sorted-array-than-an-unsorted-array
*/

#include <stdio.h>
#include <time.h>

unsigned int Euler1(){
	int i;
	unsigned int sum = 0;

	clock_t begin = clock();
	
	for(i = 0; i < 1000; i++){
		if(i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	
	clock_t end = clock();
	printf("Running time 1 : %d ms\n", end - begin);
	
	return sum;
}

unsigned int Euler2(){

	unsigned int i = 1;
	unsigned int sum = 0;

	clock_t begin = clock();

	while(i < 334){ // 334 = (1000-1/3)
		sum += (i * 3);
		i++;
	}
	
	i = 1;
	while(i < 200){ // 200 = (1000-1/5)
		sum += (i * 5);
		i++;
	}

	i = 1; 
	while(i < 67){ //All multiples of 15 are also mutiples of 3 and 5 (3 * 5 = 15) so they are added twice before. 67 = (1000-1/15)
		sum -= (i * 15);
		i++;
	}
	
	clock_t end = clock();
	printf("Running time 2 : %d ms\n", end - begin);

	return sum;
}

int main(int argc, char const *argv[])
{
	printf("Euler 1 : %u\n", Euler1());
	printf("\n");
	printf("Euler 2 : %u\n", Euler2()); 

	return 0;
}
