#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void upperCase(char s[]){
	for(int i=0;i<strlen(s);i++){
		if(s[i]>=97&&s[i]<=122){
			s[i]-=32;
		}
	}
}
int main(){
	char a[100];
	printf("Nhap chuoi ki tu:");
	gets(a);
	printf("Enter string:%s\n",a);
	upperCase(a);
	printf("Upper Case:%s\n",a);
}
