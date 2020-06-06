#include<stdio.h>

void main(){
	long ss = 0;

	for(long i = 0; i  <= 100000; i ++)  {

		ss += i;
	}

	printf("%ld\n", ss);
}
