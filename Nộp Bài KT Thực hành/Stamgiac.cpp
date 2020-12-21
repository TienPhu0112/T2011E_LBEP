#include<stdio.h>
#include<math.h>

int main(){
	float a,b,c;
	float p,s;
	do{
	printf("Nhap canh dau cua tam giac\n");
	scanf("%f",&a);	
	printf("Nhap canh hai cua tam giac\n");
	scanf("%f",&b);
	printf("Nhap canh ba cua tam giac\n");
	scanf("%f",&c);
	if((a>=b+c) || (b>=a+c) || (c>=b+a)||a<=0||b<=0||c<=0){
		printf("Loi!Ba canh vua nhap khong phai 3 canh cua tam giac!\nVui long nhap lai\n");
	}
	}while((b>=a+c) || (a>=b+c) || (c>=b+a)||c<=0||c<=0||b<=0);
		printf("Day la 3 canh cua tam giac\n");
		p = (a+b+c)/2;
        s = sqrt(p*(p-a)*(p-b)*(p-c));
        printf("Dien tich tam giac la:%f\n",s);
}
