#include <stdio.h>

int pswap(int **pa, int **pb);

int main() {
    int a, b;
    int *pa, *pb;
    
    pa=&a;
    pb=&b;
    
    printf("pa가 가리키는 변수의 주소값:%p \n", pa);
    printf("pa의 주소값:%p \n \n", &pa);
    printf("pb가 가리키는 변수의 주소값:%p \n", pb);
    printf("pb의 주소값:%p \n", &pb);
    
    printf(" ---------- 호출 ---------- \n");
    pswap(&pa, &pb);
    printf(" ---------- 호출끝 ---------- \n");
    
    printf("pa가 가리키는 변수의 주소값:%p \n", pa);
    printf("pa의 주소값:%p \n \n", &pa);
    printf("pb가 가리키는 변수의 주소값:%p \n", pb);
    printf("pb의 주소값:%p \n", &pb);
    return 0;
}

int pswap(int **ppa, int **ppb) {
    int *temp=*ppa;
    
    printf("ppa가 가리키는 변수의 주소값:%p \n", ppa);
    printf("ppb가 가리키는 변수의 주소값:%p \n", ppb);
    
    *ppa=*ppb;
    *ppb=temp;
    
    return 0;
}


#include <stdio.h>
// 함수 포인터 
int max(int a, int b);

int main() {
    int a, b;
    int (*pmax)(int, int);
    pmax=max;
    
    scanf("%d %d", &a, &b);
    printf("max(a, b):%d \n", max(a, b));
    printf("pmax(a, b):%d \n", pmax(a, b));
    
    return 0;
}

int max(int a, int b) {
    if (a>b) {
        return a;
    }
    else {
        return b;    
    }
    
    return 0;
}
