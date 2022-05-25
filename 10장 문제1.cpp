#include <stdio.h>

int main() {
	float f;
	int i;
	
	printf("실수를 입력하시오: ");
	scanf("%f",&f);
	
	if (f>=0){
		i=(f-(int)f)*100; //f값을 나타내는 또 다른 정수형 변수를 선언하지 않기 위해서 만든 문제인듯. 
	}
	else {
		i=((int)f-f)*100;
	}  
	/* 이렇게 if-else문이 아니라 그냥 i가 음수일 때 -를 붙여주는 if문으로도 줄일 수 있음.
	if(i<0) i=-i*/ 
	
	printf("i=%d \n",i);
	
	return 0;
	
}
