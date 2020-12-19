#include<stdio.h>

bool check(int x,int arr[],int n){
	for(int i=0;i<n;i++){
		if(x==arr[i])	
		return true; 
}
    return false;
}
void inSoLe(int arr[],int n){
	for(int i=0;i<n;i++){
		if(arr[i] %2!=0){
			printf("%5d",arr[i]);
		}
	}
}
int timUCLN(int a,int b){
	int ucln=1;
	for(int i=1;i<=a;i++){
		if(a%i==0&&b%i==0){
			ucln= i;
		}
	}
	return ucln;
}
int timBCNN(int a,int b){
	for(int i=a;true;i++){
		if(i%a==0&&i%b==0){
			return i;
		}
	}
}
int main(){
	int a,b,n,x;
	printf("Nhap 2 so a,b:");
	scanf("%d%d",&a,&b);
	printf("Nhap so can tim:");
	scanf("%d",&x);
	printf("Nhap so luong phan tu cua mang:");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Nhap arr[%d]",i);
		 scanf("%d",&arr[i]);
	    }
	if(check(x,arr,n)){
		printf("So co nam trong mang");
	}else{
		printf("So ko nam trong mang");
	}
}

