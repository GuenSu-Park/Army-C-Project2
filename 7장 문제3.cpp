#include <stdio.h>

int main () {
	int i;
	int sum=0;
	
	for (i=1; i<=1000; i++){
		if (i%3==0 || i%5==0){ //굳이 3의배수 5의 배수 따로 적을필요가 없고 15의 배수도 따로 뺄 필요가 없음. 
			sum=sum+i;
		}
	}
	printf("%d",sum);
	return 0;
}
	
	

