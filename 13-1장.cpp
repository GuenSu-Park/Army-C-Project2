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


#include <stdio.h>

int slave(int my_money) {
	my_money += 10000;
	return my_money;
}

int main() {
	int my_money=100000;
	printf("2009.12.12 ���:$%d \n",slave(my_money));
	printf("my_money:%d",my_money);   
	/*my_money�� ���� �״�� 100000�� ���´�. slave�Լ������� my_money�� �׳� �̸��� ���� ��
	main�Լ������� my_money�ʹ� �ٸ� �����̹Ƿ� �Լ��� ���� ������ main �Լ��� my_money��
	�״�� 100000�̴�. */ 
	
	return 0;
}


����1
#include <stdio.h>

int magicbox(int input) {
    input += 4;
    return input;
}

int main() {
    int input;
    printf("���� ������ 4�� ���Ͻðڽ��ϱ�? \n");
    scanf("%d",&input);
    
    printf("%d�� 4�� ���� ���� %d�Դϴ�.",input,magicbox(input));
    return 0;
} 


����2
#include <stdio.h>

int slave(int present_money, int today_money) {
    present_money += today_money;
    return present_money;
}

int main() {
    int present_money=10000;
    int today_money;

    printf("���� ������ ������ �Է����ּ���.");
    scanf("%d",&today_money);
    printf("���� ������ ���� ���� ������ ������ %d�̴�.",slave(present_money, today_money));
    
    return 0;
}


����3
#include <stdio.h>

int sum(int input) {
    int total=0;
    for(int i=1; i<=input; i++) {
        total += i;
    }
    return total;
}

int main() {
    int number;
    
    printf("������� ���� ���Ͻó���?");
    scanf("%d",&number);
    printf("%d������ ���� %d�Դϴ�!",number,sum(number));
    
    return 0;
}


���� 4
#include <stdio.h>

int get_prime_count(int n) {
    int total=1;
    for(int i=3; i<=n; i++) {
        for(int j=2; j<=i-1; j++) {
            if(i%j!=0) {
                total++;
            }
            else {
                break;
            }
        }
    }
    return total;
}

int main() {
    int n;
    
    printf("������� �Ҽ��� ������ �˰� ��������?");
    scanf("%d", &n);
    
    printf("%d������ �Ҽ��� ������ %d�Դϴ�!", n, get_prime_count(n));
    
    return 0;
} 
