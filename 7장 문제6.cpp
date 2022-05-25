#include <stdio.h>

int main(){
	int a, b, c;
	int number=0;
	
	for(a=2000; a>667; a--){
		for(b=2; b<a; b++){
			for(c=1; c<b; c++){
				if(a+b+c==2000){
					number++;
			     }
			}
		}
	}
	printf("이러한 식을 만족하는 a,b,c의 개수는 %d이다",number);
	
	return 0;
}

