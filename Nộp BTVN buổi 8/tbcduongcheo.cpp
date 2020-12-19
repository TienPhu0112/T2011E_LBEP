#include<stdio.h>

int main(){
	int n;
	printf("Nhap co cua ma tran mxn:");
	scanf("%d",&n);
	int arr1[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("Nhap arr1[%d][%d]:",i,j);
			scanf("%d",&arr1[i][j]);
		}
	}
	int tong=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j){
				tong+=arr1[i][j];
			}
		}
	}
	printf("Trung binh cong duong cheo la:%f",float(tong)/n);
	printf("\nMa tran:\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		printf("%5d",arr1[i][j]);
		}
		printf("\n");
	}	
}
