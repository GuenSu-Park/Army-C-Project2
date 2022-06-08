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
