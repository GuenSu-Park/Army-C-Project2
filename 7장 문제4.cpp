#include <stdio.h>

int main() {
	int i, N;
	int j=1;
	
	printf("몇까지의 곱을 원하시나요?");
	scanf("%d",&N);
	
	for(i=1; i<=N; i++){
		j=i*j;
	}
	printf("1부터 %d까지의 곱의 값은%d이다",N,j);
	
	return 0;
}
