#include <stdio.h>

int main () {
	int a;
	int b;
	const int *pa=&a;
	
	*pa=3; //올바르지 않은 문장 
	pa=&b; // 올바른 문장(포인터 pa가 가르키는 주소값은 바뀌어도 됨.) 
	return 0;
	/* 이 코드를 컴파일하면 오류가 난다.
	const int *pa의 의미는 포인터 pa가 가르키는 변수의 값이 바꾸면 안된다라는 의미이다.
	*/ 
}

#include <stdio.h>

int main () {
	int a;
	int b;
	int* const pa=&a;
	
	*pa=3; // 올바른 문장 
	pa=&b; // 올바르지 않은 문장 
	return 0;
	/* 이 코드도 컴파일하면 오류가 난다.
	int* const pa의 의미는 포인터가 가르키는 변수의 주소값이 바뀌면 안된다는 의미이다.
	*/ 
}

#includle <stdio.h>

int main () {
	int a;
	int b;
	const int* const pa=&a;
	
	*pa=3; // 올바르지 않은 문장 
	pa=&b; // 올바르지 않은 문장 
	
	return 0;
	/* 위의 나와있던 것을 모두 합친 것 */ 
} 



#include <stdio.h>

int main() {
    int a;
    char b;
    double c;
    int *pa=&a;
    char *pb=&b;
    double *pc=&c;
    
    printf("pa의 값:%p \n",pa);
    printf("(pa+1)의 값:%p \n",pa+1);
    printf("pb의 값:%p \n",pb);
    printf("(pb+1)의 값;%p \n",pb+1);
    printf("pc의 값:%p \n",pc);
    printf("(pc+1)의 값:%p \n",pc+1);
    
    return 0;
    /* 우리가 정의한 포인터의 형대로 int 4바이트 char 1바이트 double 8바이트로 포인터에 +1을 해주면
	정의한 포인텽의 형의 바이트만큼 더해진다. */ 
}



#include <stdio.h>

int main() {
    int arr[5]={1,2,3,4,5};
    
    printf("a[3]:%d \n",arr[3]);
    printf("*(a+3):%d \n",*(arr+3)); // 배열 이름인 arr의 주소값이 arr[0]의 주소값이랑 같다. 
    return 0;
    /* C에서 []라는 연산자가 쓰이면 자동적으로 arr[3] --> *(arr+3) 으로 바뀌어서 처리가 됨.
	그리고 arr은 + 연산자와 사용되기 때문에 첫 번째 원소를 가리키는 포인터로 변환되어서 arr+3이 
	포인터 덧셈을 수행하게 됨. 그리고 이는 배열의 4번째 원소를 가리키게 됨.
	*/ 
}
