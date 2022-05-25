#include <stdio.h>

int main() {
    int arr[3][3]={1,2,3,4,5,6,7,8,9,}; //3x3으로 3개의 숫자가 아니라 9개의 숫자가 있어야함. 
    
    printf("arr 배열의 2행 3열의 수를 출력: %d \n",arr[1][2]);
    printf("arr 배열의 1행 2열의 수를 출력: %d \n",arr[0][1]);
    return 0;
}


#include <stdio.h>

int main() {
    int score[3][2]; //3 명의 학생의 2 과목의 데이터를 보관하는 score 2 차원 배열
    int i, j;
    
    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
            if (j==0){
                printf("%d번째 학생의 국어 점수: ",i+1);
                scanf("%d",&score[i][j]);
            }
            else if (j==1){
                printf("%d번째 학생의 수학 점수: ",i+1);
                scanf("%d",&score[i][j]);
            }
        }
    }
    
    for(i=0; i<3; i++){
        printf("%d번째 학생의 국어 점수: %d, 수학 점수: %d \n",i+1,
               score[i][0],score[i][1]);
    }
    
    return 0;
}
