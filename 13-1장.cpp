#include <stdio.h>

int return_func() {
    printf("�� ����ȴ� \n");
    return 0;
    printf("�� �ȵ� �Ф� \n"); 
	/* �տ��� �̹� return�� ����Ǽ� ���α׷��� �ٷ� �Լ��� ȣ���Ͽ��� �κ����� �Ѿ����
	�� ������ ���� �͵�(printf("�� �ȵ� �Ф� \n");)�� ������� ���� */ 
}
int main(){
    return_func();
    return 0;
}


#include <stdio.h>

int slave(int master_money){
    master_money+=10000;
    return master_money;
} // �Ű� ���� master_money�� ���� 

int main() {
    int my_money=100000;
    printf("2009.12.12 ���:$%d \n",slave(my_money)); //master_money�� my_money�� ��. 
    
    return 0;
}
