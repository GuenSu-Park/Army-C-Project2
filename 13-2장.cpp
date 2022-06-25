#include <stdio.h>

int change_val(int *pi) {
    printf("----- change_val 함수 안에서 ----- \n");
    printf("pi의 값:%p \n",pi);
    printf("pi가 가리키는 것의 값:%d \n",*pi);
    
    *pi=3;
    
    printf("----- change_val 함수 끝~~ ----- \n");
    return 0;
}
// 포인터를 이용해서 함수 사이의 변수 값을 바꿀 수 있다... 
int main() {
    int i=0;
    
    printf("i 변수의 주소값:%p \n",&i);
    printf("호출 이전 i 의 값:%d \n",i);
    change_val(&i);
    printf("호출 이후 i 의 값:%d \n",i);
    
    return 0;
}


#include <stdio.h>

int swap(int *a, int *b); 
/* 보통 프로그래머들은 main 함수 뒤에 또 다른 함수를 적는다. 위에 줄을 함수의 원형이라고 하는데 함수의
원형을 사용하여 컴파일러에게 이 함수를 쓴다는 것을 미리 알려줘서 함수 안에 오류가 있을 때 컴파일러가
프로그래머에게 어디에 오류가 있는지 알려줄 수 있다. 그래서 함수를 쓸 때에는 함수의 원형을 반드시 
써야한다. */ 

int main() {
    int i, j;
    i=3;
    j=5;
    printf("SWAP 이전: i:%d, j:%d \n",i,j);
    swap(&i, &j);
    printf("SWAP 이후: i:%d, j:%d \n",i,j);
    
    return 0;
}

int swap(int *a, int *b) {
    int temp=*a;
    
    *a=*b;
    *b=temp;
    
    return 0;
}


#include <stdio.h>

int max_number(int *parr);
int main() {
  int arr[10];
  int i;

  for (i = 0; i < 10; i++) {
    scanf("%d", &arr[i]);
  }

  printf("입력한 배열 중 가장 큰 수 : %d \n", max_number(arr)); // arr=&arr[0]이다. 
  return 0;
}
int max_number(int *parr) {
  int i;
  int max = parr[0];

  for (i = 1; i < 10; i++) {
    if (parr[i] > max) {
      max = parr[i];
    }
  }

  return max;
}



