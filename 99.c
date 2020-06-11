#include<stdio.h>

void main() {
	for(long long a = 2; a < 1001; a++) {
		for(long long b = 1; b <10001; b++){
			printf("%lldx%lld=%lld\n", a, b, a * b );
		}
		
	}

}
