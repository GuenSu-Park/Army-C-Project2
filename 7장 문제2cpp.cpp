#include <stdio.h>

int main () {
	int N, i, j, z;
	
	printf("몇 줄의 삼각형을 원하시나요?");
	scanf("%d",&N);
	
	for (i=1; i<=N; i++){ //삼각형의 줄을 나타낸다. 
		for (j=1; j<=i-1; j++){ //삼각형의 줄에 따라서 빈칸이 결정된다. 
			printf(" ");
		}	
		for (z=1; z<=N-(2*i-4); z++){ //삼각형의 줄에 따라서 별의 갯수가 결정된다. 
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
	
	

