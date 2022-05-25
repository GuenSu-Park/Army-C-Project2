#include <stdio.h>

int main() {
    int arr[3]={1,2,3};
    int *parr;
    
    parr=arr;
    /* parr=&arr[0]; 도 동일하다! */ 
    
    printf("arr[1]:%d \n",arr[1]);
    printf("parr[1]:%d \n",parr[1]); // parr이 배열이 아니고 parr[1] --> *(parr+1)로 바뀌는 것임. 
    return 0;
}


#include <stdio.h>

int main() {
    int arr[10]={100,98,97,95,89,76,92,96,100,99};
    
    int *parr=arr;
    int sum=0;
    
    while(parr-arr<=9){
        sum+=(*parr);
        parr++; // 포인터의 덧셈으로 봐야함. 하지만 parr에는 +1이 된 것으로도 봄. 
    }
    /* 포인터 parr과 arr는 주소값을 의미하고 포인터의 덧셈에서는 int형 만큼 즉 4바이트의 값이 더해지는데
	그럼 parr과 arr의 차는 4가 아니냐고 생각을 했었는데, 실질적으로는 parr에 4바이트가 더해지는게 맞지만
	코드에서는 parr에 +1만 했기 때문에 while 문이 10번이 실행될 수 있다. */ 
    
    printf("내 시험 점수 평균:%d \n",sum/10);
    return 0;
}


#include <stdio.h>

int main() {
    int a;
    int *pa;
    int **ppa;
    
    pa=&a;
    ppa=&pa;
    
    a=3;
    
    printf("a:%d // *pa:%d //  **ppa:%d \n",a,*pa,**ppa);//*pa=3이고 *ppa는 pa의 주소값이여서 **ppa=3이됨 
    printf("&a:%p // pa:%p // *ppa:%p \n",&a,pa,*ppa);//pa는 a의 주소값이고 *ppa는 pa가 가리키는 a의주소값 
    printf("&pa:%p // ppa:%p \n",&pa,ppa);//ppa는 포인터 pa의 주소값 
    
    return 0;
}
