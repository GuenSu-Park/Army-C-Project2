#include <stdio.h>

int pswap(int **pa, int **pb);

int main() {
    int a, b;
    int *pa, *pb;
    
    pa=&a;
    pb=&b;
    
    printf("pa�� ����Ű�� ������ �ּҰ�:%p \n", pa);
    printf("pa�� �ּҰ�:%p \n \n", &pa);
    printf("pb�� ����Ű�� ������ �ּҰ�:%p \n", pb);
    printf("pb�� �ּҰ�:%p \n", &pb);
    
    printf(" ---------- ȣ�� ---------- \n");
    pswap(&pa, &pb);
    printf(" ---------- ȣ�ⳡ ---------- \n");
    
    printf("pa�� ����Ű�� ������ �ּҰ�:%p \n", pa);
    printf("pa�� �ּҰ�:%p \n \n", &pa);
    printf("pb�� ����Ű�� ������ �ּҰ�:%p \n", pb);
    printf("pb�� �ּҰ�:%p \n", &pb);
    return 0;
}

int pswap(int **ppa, int **ppb) {
    int *temp=*ppa;
    
    printf("ppa�� ����Ű�� ������ �ּҰ�:%p \n", ppa);
    printf("ppb�� ����Ű�� ������ �ּҰ�:%p \n", ppb);
    
    *ppa=*ppb;
    *ppb=temp;
    
    return 0;
}


#include <stdio.h>
// �Լ� ������ 
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
