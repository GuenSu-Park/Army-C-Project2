#include <stdio.h>

int return_func() {
    printf("난 실행된다 \n");
    return 0;
    printf("난 안돼 ㅠㅠ \n"); 
	/* 앞에서 이미 return이 실행되서 프로그램이 바로 함수를 호출하였던 부분으로 넘어가버려
	그 다음에 오는 것들(printf("난 안돼 ㅠㅠ \n");)이 실행되지 않음 */ 
}
int main(){
    return_func();
    return 0;
}


#include <stdio.h>

int slave(int master_money){
    master_money+=10000;
    return master_money;
} // 매개 변수 master_money로 연결 

int main() {
    int my_money=100000;
    printf("2009.12.12 재산:$%d \n",slave(my_money)); //master_money에 my_money가 들어감. 
    
    return 0;
}


#include <stdio.h>

int slave(int my_money) {
	my_money += 10000;
	return my_money;
}

int main() {
	int my_money=100000;
	printf("2009.12.12 재산:$%d \n",slave(my_money));
	printf("my_money:%d",my_money);   
	/*my_money의 값은 그대로 100000이 나온다. slave함수에서의 my_money는 그냥 이름만 같을 뿐
	main함수에서의 my_money와는 다른 변수이므로 함수를 쓰고 나서의 main 함수의 my_money는
	그대로 100000이다. */ 
	
	return 0;
}


문제1
#include <stdio.h>

int magicbox(int input) {
    input += 4;
    return input;
}

int main() {
    int input;
    printf("무슨 정수에 4를 더하시겠습니까? \n");
    scanf("%d",&input);
    
    printf("%d에 4를 더한 값은 %d입니다.",input,magicbox(input));
    return 0;
} 


문제2
#include <stdio.h>

int slave(int present_money, int today_money) {
    present_money += today_money;
    return present_money;
}

int main() {
    int present_money=10000;
    int today_money;

    printf("오늘 귀족의 수입을 입력해주세요.");
    scanf("%d",&today_money);
    printf("현재 귀족의 재산과 오늘 귀족의 수입은 %d이다.",slave(present_money, today_money));
    
    return 0;
}


문제3
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
    
    printf("몇까지의 합을 원하시나요?");
    scanf("%d",&number);
    printf("%d까지의 합은 %d입니다!",number,sum(number));
    
    return 0;
}


문제 4
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
    
    printf("몇까지의 소수의 개수를 알고 싶으세요?");
    scanf("%d", &n);
    
    printf("%d까지의 소수의 개수는 %d입니다!", n, get_prime_count(n));
    
    return 0;
} 
