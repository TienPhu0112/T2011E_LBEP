#include<stdio.h>

int main(){
	int m,n;
	printf("Nhap co cua ma tran mxn:");
	scanf("%d%d",&m,&n);
	int arr1[m][n],arr2[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("Nhap arr1[%d][%d]:",i,j);
			scanf("%d",&arr1[i][j]);
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("Nhap arr2[%d][%d]:",i,j);
			scanf("%d",&arr2[i][j]);
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
		arr1[i][j]+=arr2[i][j];
		}
	}
	printf("Tong cua 2 ma tran la:\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
		printf("%5d",arr1[i][j]);
		}
		printf("\n");
	}	
}
