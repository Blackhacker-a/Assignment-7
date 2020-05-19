#include<stdio.h>
int main(){
	int arr[4][3];
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			printf("Nhap vao phan tu cua ma tran arr[%d][%d] ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
    printf("Ma tran truoc khi chuyen vi la \n");
    
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			printf("%d\t",arr[i][j]);
		}
	printf("\n");	
	}
	
	printf("Ma tran sau khi chuyen vi la \n");
	
	int ary[3][4];
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			ary[i][j]=arr[j][i];
		}
	printf("\n");	
	}
	
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			printf("%d\t",ary[i][j]);
		}
	printf("\n");	
	}
	
	
	
	
	
	
	
	
	
	}
