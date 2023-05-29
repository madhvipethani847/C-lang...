#include<stdio.h>

int main(){
    
    int a;
    int b;
    int c;
    printf("enter velue of a = \n");
    scanf("%d",&a);
    printf("enter velue of b = \n");
    scanf("%d",&b);
    
    c =( (a*a*a) +( (3*a*b)*(a+b)) + (b*b*b) );
    
    printf("ans = %d", c);
    
    return 0;
}
