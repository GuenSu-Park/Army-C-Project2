#include <stdio.h>

int change_val(int *pi) {
    printf("----- change_val �Լ� �ȿ��� ----- \n");
    printf("pi�� ��:%p \n",pi);
    printf("pi�� ����Ű�� ���� ��:%d \n",*pi);
    
    *pi=3;
    
    printf("----- change_val �Լ� ��~~ ----- \n");
    return 0;
}
// �����͸� �̿��ؼ� �Լ� ������ ���� ���� �ٲ� �� �ִ�... 
int main() {
    int i=0;
    
    printf("i ������ �ּҰ�:%p \n",&i);
    printf("ȣ�� ���� i �� ��:%d \n",i);
    change_val(&i);
    printf("ȣ�� ���� i �� ��:%d \n",i);
    
    return 0;
}


#include <stdio.h>

int swap(int *a, int *b); 
/* ���� ���α׷��ӵ��� main �Լ� �ڿ� �� �ٸ� �Լ��� ���´�. ���� ���� �Լ��� �����̶�� �ϴµ� �Լ���
������ ����Ͽ� �����Ϸ����� �� �Լ��� ���ٴ� ���� �̸� �˷��༭ �Լ� �ȿ� ������ ���� �� �����Ϸ���
���α׷��ӿ��� ��� ������ �ִ��� �˷��� �� �ִ�. �׷��� �Լ��� �� ������ �Լ��� ������ �ݵ�� 
����Ѵ�. */ 

int main() {
    int i, j;
    i=3;
    j=5;
    printf("SWAP ����: i:%d, j:%d \n",i,j);
    swap(&i, &j);
    printf("SWAP ����: i:%d, j:%d \n",i,j);
    
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

  printf("�Է��� �迭 �� ���� ū �� : %d \n", max_number(arr)); // arr=&arr[0]�̴�. 
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



