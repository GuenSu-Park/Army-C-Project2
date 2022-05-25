#include <stdio.h>

int main () {
	int N, i, j, z;
	
	printf("몇 줄의 삼각형을 원하시나요?");
	scanf("%d",&N);
	
	for (i=1; i<=N; i++){ //삼각형의 줄을 나타낸다. 
		for (j=1; j<=N-i; j++) { //삼각형의 줄의 따라 앞의 빈칸을 만듦.
			printf(" "); 
		}
		for (z=1; z<=2*i-1; z++){ //삼각형의 줄의 따라서 홀수 갯수의 별을 찍는다. 
			printf("*");
		}
		printf("\n"); 
		}
	return 0;	
	}
	
	

