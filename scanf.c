#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main(){
	double num = 0;

	scanf("%lf", &num);
	printf("%lf\n", num);
	double ss = 0;

	for(double i = 0; i  <= num; i ++)  {

		ss += i;
		//printf("%lf\n", ss);
	}

	printf("%lf\n", ss);
}
