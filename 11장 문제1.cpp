#include <stdio.h>

int main() {
	int arr[10];
	int i, ave=0;
	int blank[1]={1};
	int j;
	
	for (i=0; i<=9; i++){
		printf("%d번째 학생의 성적은?",i+1);
		scanf("%d",&arr[i]); 
	}
	for (i=0; i<=9; i++){
		ave=ave+arr[i];
	}
	ave=ave/10;
	
	printf("전체 학생의 평균은: %d \n",ave);
	for(i=0; i<10; i++){
		printf("학생 %d: ",i+1);
		if(arr[i]>=ave) printf("합격\n");
		else printf("불합격\n");
	}
	
	printf("학생들의 등수를 보여주겠습니다. \n");
	for (i=0; i<10; i++){
		printf("%d등:",i+1);
		for (j=i+1; j<10; j++){
			if (arr[i]<arr[j]){
				blank[0]=arr[i];
				arr[i]=arr[j];
				arr[j]=blank[0];
			}
		}
		printf("%d \n",arr[i]);
	}
	return 0;
}
