 #include<stdio.h>
 int main(){
 	int arr[4][3];
 	for(int i=0;i<4;i++){
 		for(int j=0;j<3;j++){
 			printf("Nhap vao phan tu cua ma tran thu nhat arr[%d][%d] ",i,j);
 			scanf("%d",&arr[i][j]);
 		}
 	}		
 	int ary[4][3];
    for(int i=0;i<4;i++){
 		for(int j=0;j<3;j++){
 			printf("Nhap vao phan tu cua ma tran thu hai ary[%d][%d] ",i,j);
 			scanf("%d",&ary[i][j]);
 		}
 	}	
 	
 	int a[4][3];
    for(int i=0;i<4;i++){
 		for(int j=0;j<3;j++){
 			a[i][j]=arr[i][j]+ary[i][j];
 		}
 	}	
 	int ar[4][3];
    for(int i=0;i<4;i++){
 		for(int j=0;j<3;j++){
 			ar[i][j]=arr[i][j]-ary[i][j];
 		}
 	}	
 	
 	printf("Ma tran tong cua hai ma tran vua nhap la \n");
 	
 	for(int i=0;i<4;i++){
 		for(int j=0;j<3;j++){
 			printf("%d\t",a[i][j]);
 		}
 		printf("\n");	
 	}	
 	
 	printf("Ma tran hieu cua hai ma tran vua nhap la \n");
 	
 	for(int i=0;i<4;i++){
 		for(int j=0;j<3;j++){
 			printf("%d\t",ar[i][j]);
 		}
 		printf("\n");	
 	}	
 	
 	
 	
}	
