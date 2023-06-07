#include<stdio.h>

int main (){
	
	int a,b,c;
	
	printf("Enter A : ");
	scanf("%d",&a);
	
	printf("Enter B : ");
	scanf("%d",&b);
	
	printf("Enter C : ");
	scanf("%d",&c);
	
	a>b ? a>c ? printf("a is max.!") : printf("c is max.!") : b>c ? printf("b is max.!") : printf("c is max.");
	
	return 0;
}