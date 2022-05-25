#include <stdio.h>

int main(){
	int N;
	int i=2;
	
	printf("소인수 분해 할 자연수를 입력해주세요.");
	scanf("%d",&N);
	
	printf("%d=",N);
	
	while(i){//당연히 for문이 더 쉬울줄 알았는데 아니였다고 한다; 
		if(N%i==0){
			N=N/i; //나머지를 나타내는 변수를 안써도 되게 함. 
			printf("%d",i);
			if(N==1) break; //N이 나머지를 의미하니 이 한 줄로 while문을 빠져나갈 수 있다. 이걸 어케생각하노? 
			printf("*");
		}
		else{
			i++;
		}
	}
	
	return 0;
}

