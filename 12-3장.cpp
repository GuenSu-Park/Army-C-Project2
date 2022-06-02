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


#include <stdio.h>

int main(){
	int arr[2][3]={{1,2,3}, {4,5,6}};
	int **parr;
	
	parr=arr;
	
	printf("parr[1][1]:%d \n",parr[1][1]); // 버그!
	/* 위코드는 무슨일을 했는가? 일단 parr에는 arr배열의 주소값이 들어가 있음. 하지만 parr[1][1]이 
	어떻게 해석이 되는가 생각해보면 
	먼저 parr[1][1]은 *(*(parr+1)+1)과 동일한 문장임. parr+1을 하면 뭐가 되냐면 지금 parr은 int*를 
	가르키는 포인터이고, int* 의 크기는 포인터이기 때문에 8바이트이기에 parr+!을 하면 실제 주소값이 8
	증가하게 됨.
	따라서 parr+1 은 arr 배열의 세번째 원소의 주소값을 가지게 됨.(왜냐면 int는 4바이트니까) 
	따라서 *(parr+1)은 3이 될 것임.
	그 다음에 *(parr+1)+1을 하면 몇이 증가하는지는 현재 (parr+1)의 타입은 int* 입니다. 따라서 int의 크기
	만큼인 4가 늘어나게 됩니다. 결국 *(parr+1)+1은 7이 됨.
	그래서 결국 *(*(parr+1)+1)은 마치 주소값 7에 있는 값을 읽어라! 하는말과 동일함. 그리고 해당 위치는
	프로그램이 읽을 수 없기에 오류가 발생하게 되는 것임. */ 
	
	return 0;
}
