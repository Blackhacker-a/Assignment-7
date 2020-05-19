#include<stdio.h>
int main(){
	int arr[4][4];
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("Nhap vao cac phan tu cua ma tran arr[%d][%d]",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	
	int sum=0;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(i==j or j==i){
			   sum+=arr[i][j]+arr[j][i];
			}	
		}
	}
    float tbc=(float)sum/8;
    printf("%0.3f",tbc);
	
	}
