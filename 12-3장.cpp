#include <stdio.h>

int main() {
    int arr[3]={1,2,3};
    int *parr;
    
    parr=arr;
    /* parr=&arr[0]; �� �����ϴ�! */ 
    
    printf("arr[1]:%d \n",arr[1]);
    printf("parr[1]:%d \n",parr[1]); // parr�� �迭�� �ƴϰ� parr[1] --> *(parr+1)�� �ٲ�� ����. 
    return 0;
}


#include <stdio.h>

int main() {
    int arr[10]={100,98,97,95,89,76,92,96,100,99};
    
    int *parr=arr;
    int sum=0;
    
    while(parr-arr<=9){
        sum+=(*parr);
        parr++; // �������� �������� ������. ������ parr���� +1�� �� �����ε� ��. 
    }
    /* ������ parr�� arr�� �ּҰ��� �ǹ��ϰ� �������� ���������� int�� ��ŭ �� 4����Ʈ�� ���� �������µ�
	�׷� parr�� arr�� ���� 4�� �ƴϳİ� ������ �߾��µ�, ���������δ� parr�� 4����Ʈ�� �������°� ������
	�ڵ忡���� parr�� +1�� �߱� ������ while ���� 10���� ����� �� �ִ�. */ 
    
    printf("�� ���� ���� ���:%d \n",sum/10);
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
    
    printf("a:%d // *pa:%d //  **ppa:%d \n",a,*pa,**ppa);//*pa=3�̰� *ppa�� pa�� �ּҰ��̿��� **ppa=3�̵� 
    printf("&a:%p // pa:%p // *ppa:%p \n",&a,pa,*ppa);//pa�� a�� �ּҰ��̰� *ppa�� pa�� ����Ű�� a���ּҰ� 
    printf("&pa:%p // ppa:%p \n",&pa,ppa);//ppa�� ������ pa�� �ּҰ� 
    
    return 0;
}
