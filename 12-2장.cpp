#include <stdio.h>

int main () {
	int a;
	int b;
	const int *pa=&a;
	
	*pa=3; //�ùٸ��� ���� ���� 
	pa=&b; // �ùٸ� ����(������ pa�� ����Ű�� �ּҰ��� �ٲ� ��.) 
	return 0;
	/* �� �ڵ带 �������ϸ� ������ ����.
	const int *pa�� �ǹ̴� ������ pa�� ����Ű�� ������ ���� �ٲٸ� �ȵȴٶ�� �ǹ��̴�.
	*/ 
}

#include <stdio.h>

int main () {
	int a;
	int b;
	int* const pa=&a;
	
	*pa=3; // �ùٸ� ���� 
	pa=&b; // �ùٸ��� ���� ���� 
	return 0;
	/* �� �ڵ嵵 �������ϸ� ������ ����.
	int* const pa�� �ǹ̴� �����Ͱ� ����Ű�� ������ �ּҰ��� �ٲ�� �ȵȴٴ� �ǹ��̴�.
	*/ 
}

#includle <stdio.h>

int main () {
	int a;
	int b;
	const int* const pa=&a;
	
	*pa=3; // �ùٸ��� ���� ���� 
	pa=&b; // �ùٸ��� ���� ���� 
	
	return 0;
	/* ���� �����ִ� ���� ��� ��ģ �� */ 
} 



#include <stdio.h>

int main() {
    int a;
    char b;
    double c;
    int *pa=&a;
    char *pb=&b;
    double *pc=&c;
    
    printf("pa�� ��:%p \n",pa);
    printf("(pa+1)�� ��:%p \n",pa+1);
    printf("pb�� ��:%p \n",pb);
    printf("(pb+1)�� ��;%p \n",pb+1);
    printf("pc�� ��:%p \n",pc);
    printf("(pc+1)�� ��:%p \n",pc+1);
    
    return 0;
    /* �츮�� ������ �������� ����� int 4����Ʈ char 1����Ʈ double 8����Ʈ�� �����Ϳ� +1�� ���ָ�
	������ ���ηO�� ���� ����Ʈ��ŭ ��������. */ 
}



#include <stdio.h>

int main() {
    int arr[5]={1,2,3,4,5};
    
    printf("a[3]:%d \n",arr[3]);
    printf("*(a+3):%d \n",*(arr+3)); // �迭 �̸��� arr�� �ּҰ��� arr[0]�� �ּҰ��̶� ����. 
    return 0;
    /* C���� []��� �����ڰ� ���̸� �ڵ������� arr[3] --> *(arr+3) ���� �ٲ� ó���� ��.
	�׸��� arr�� + �����ڿ� ���Ǳ� ������ ù ��° ���Ҹ� ����Ű�� �����ͷ� ��ȯ�Ǿ arr+3�� 
	������ ������ �����ϰ� ��. �׸��� �̴� �迭�� 4��° ���Ҹ� ����Ű�� ��.
	*/ 
}
