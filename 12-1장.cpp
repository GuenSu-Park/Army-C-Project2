#include <stdio.h>

int main() {
    int *p;
    int a;
    
    p=&a;
    a=2;
    
    printf("a의 값: %d\n",a);
    printf("*p의 값: %d \n",*p); 
    /* *p 를 통해 p 에 저장된 주소(변수 a 의 주소)에 해당하는 데이터, 즉 변수 a 그 자체를 의미할 수 
	있게 됩니다. 다시 말해 *p 와 변수 a 는 정확히 동일합니다. */
    
    return 0;
}


#include <stdio.h>

int main() {
    int *p;
    int a;
    
    p=&a;
    *p=3;
    
    printf("a의 값: %d \n",a);
    printf("*p의 값: %d \n",*p);
    /* *p 를 통해 "나에 저장된 주소(변수 a 의 주소)에 해당하는 데이터(변수 a) 로 생각하시오" 를 의미하여 
	*p = 3 은 a = 3 과 동일한 의미를 지니게 되었습니다. */
	
    return 0;
}


#include <stdio.h>

int main() {
    int a;
    int b;
    int *p;
    
    p=&a;
    *p=2;
    p=&b;
    *p=4;
    
    printf("a:%d \n",a);
    printf("b:%d \n",b);
    // 포인터도 변수이기 때문에 값이 바뀔 수가 있다! 
    
    return 0;
}
