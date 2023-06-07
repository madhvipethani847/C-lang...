#include<stdio.h>

int main(){
	
    int a;
    
    printf("enter number of month = ");
    scanf("%d",&a);
    
    switch(a){
    	
    	case 1: 
    	 printf("JANUARY");
    	 break;
    	 
    	 case 2: 
    	 printf("FEBRUARY");
    	 break;
    	 
    	 case 3: 
    	 printf("MARCH");
    	 break;
    	 
    	 case 4: 
    	 printf("APRIL");
    	 break;
    	 
    	 case 5: 
    	 printf("MAY");
    	 break;
    	 
    	 case 6: 
    	 printf("JUNE");
    	 break;
    	 
    	 case 7: 
    	 printf("JULY");
    	 break;
    	 
    	 case 8: 
    	 printf("AUGHST");
    	 break;
    	 
    	 case 9: 
    	 printf("SAPTEMBER");
    	 break;
    	 
    	 case 10: 
    	 printf("OCTOMBER");
    	 break;
    	 
    	 case 11: 
    	 printf("NAVEMBER");
    	 break;
    	 
    	 case 12: 
    	 printf("DESEMBER");
    	 break;
    	 
    	 default :
    	 	printf("invalid! input");
    	 	break;
    	
	}


   return 0;
}