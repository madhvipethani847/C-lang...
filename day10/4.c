#include<stdio.h>

int main(){
	
	int a,b,c,d,e;
	
	printf("if you want to book your flight\n\n");
	printf("enter 1. for 'yes'\n\n");
	printf("enter 2. for 'no!'\n\n");
	printf("put your ans. hear = ");
	scanf("%d",&a);
	
	switch(a){
		
		 default : 
         printf("invalid! input");  	 		    
        break;
		
		case 2 : 
	    printf("tnx! for visit our site ");
         break;
			 
  	 
		
		case 1 : 
		  printf("\n\n  today we are able to book surat to mumbai flight!");
		  printf("\n\n enter 3. for one way!");
		  printf("\n\n enter 4. for roundtrip!");
		  printf("\n\n enter 5. for multicity!");
		  printf("\n\n put your ans. hear = ");
		  
		  scanf("%d",&b);
		  
		  switch(b){
		  	 case 3 :
		  	 	printf("\n\n book your one way flight\n\n");
		  	 	printf(" enter 6. for economy class\n\n");
		  	 	printf(" enter 7. for premium economy class\n\n");
		  	 	printf(" enter 8. for business class\n\n");
		  	 	printf("\nput your ans. hear = ");
		  	 	
		  	 	scanf("%d",&c);
		  	 	
		  	 	switch(c){
		  	 		case 6 :
		  	 			printf(" congratulations!!\n");
		  	 			printf("your one way flight for surat to mumbai in economy class is book successfully!!");
		  	 			break;
		  	 			
		  	 		case 7 :
		  	 			printf(" congratulations!!\n");
		  	 			printf("your one way flight for surat to mumbai in premium economy class is book successfully!!");
		  	 			break;
		  	 			
		  	 		case 8 :
		  	 			printf(" congratulations!!\n");
		  	 			printf("your one way flight for surat to mumbai in business class is book successfully!!");
		  	 			break;
		  	 			
		  	 		default : 
		  	 		    printf("\n\ninvalid! input");
		  	 				break;
				   }
				   
				   break;
		  	 case 4 :
		  	 	printf("\n\n book your roundtrip flight\n\n");
		  	 	printf(" enter 9. for economy class\n\n");
		  	 	printf(" enter 10. for premium economy class\n\n");
		  	 	printf(" enter 11. for business class\n\n");
		  	 	printf("put your ans. hear = ");
		  	 	
		  	 	scanf("%d",&d);
		  	 	
		  	 	switch(d){
		  	 		case 9 :
		  	 			printf(" congratulations!!\n");
		  	 			printf("your roundtrip flight for surat to mumbai in economy class is book successfully!!");
		  	 			break;
		  	 			
		  	 		case 10 :
		  	 			printf(" congratulations!!\n");
		  	 			printf("your roundtrip flight for surat to mumbai in premium economy class is book successfully!!");
		  	 			break;
		  	 			
		  	 		case 11 :
		  	 			printf(" congratulations!!\n");
		  	 			printf("your roundtrip flight for surat to mumbai in business class is book successfully!!");
		  	 			break;
		  	 			
		  	 		default : 
		  	 		    printf("\n\ninvalid! input");
		  	 		    break;
		  	 		}
		  	 		    
		  	 		    break;
			 case 5 :
		  	 	printf("\n\n book your multicity flight\n\n");
		  	 	printf(" enter 12. for economy class\n\n");
		  	 	printf(" enter 13. for premium economy class\n\n");
		  	 	printf(" enter 14. for business class\n\n");
		  	 	printf("put your ans. hear = ");
		  	 	
		  	 	scanf("%d",&e);
		  	 	
		  	 	switch(e){
		  	 		case 12 :
		  	 			printf(" congratulations!!\n");
		  	 			printf("your multicity flight for surat to mumbai in economy class is book successfully!!");
		  	 			break;
		  	 			
		  	 		case 13 :
		  	 			printf(" congratulations!!\n");
		  	 			printf("your multicity flight for surat to mumbai in premium economy class is book successfully!!");
		  	 			break;
		  	 			
		  	 		case 14 :
		  	 			printf(" congratulations!!\n");
		  	 			printf("your multicity flight for surat to mumbai in business class is book successfully!!");
                         break;
 	  	 			
		  	 		default : 
		  	 		    printf("\n\ninvalid! input");
		  	 		    break;
		  	 	}
		  	 	break; 
			default :
				printf("\n\ninvalid! input");
				break;
				
        
		  }
		  
	}	
	
	return 0;
}