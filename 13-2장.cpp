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
