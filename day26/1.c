#include<stdio.h>

int main(){
	
	int n;
	
	printf("enter size : ");
	scanf("%d",&n);
	 
	 int a[n];
	 int *b;
	 int i;
	 
	 for(i=0;i<n;i++){
	 
	 
	  printf("enter value : ");
	  scanf(" %d",&a[i]);
	  
    }
	 for(i=0;i<n;i++){
	 	
	 	b=&a[i];
	 	printf("%p => %d => %d\n",b,*b,(*b)*(*b));
	 	
	 }
	 
	return 0;
}