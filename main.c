#include<stdio.h>
#include"myBank.h"

int main() {
  
  int x;
  double z;
  char y ;

      while (y != 'E'){
	    printf("please enter an action : \n" );
      scanf(" %c",&y);
         
	if(y == 'O' || y == 'B' || y == 'D' || y == 'W' || y == 'C'  || y == 'L' || y == 'P' || y == 'E' ) { 
	
	   
	    if(y == 'O'){
	      printf("please enter a sum : \n");
	       if (scanf("%lf" , &z) == 1){ 
	      printf("%d \n" , invoice(z));
	       }
	       else
	       printf("Error! \n ");
	    }
	    
	    if(y == 'B'){
	      printf("please enter an account number : \n");
	      scanf(" %d",&x);
	      printf("%.2lf \n",B(x));
	    }
	    
	    if(y == 'D'){
	      printf("please enter an account number : \n");
	      scanf("%d",&x);
	      printf("please enter sum to deeping :");
	      scanf("%lf",&z);
	      printf("%.2lf \n" , D(x , z));
	    }
	    
	    if(y == 'W'){
	      printf("please enter an account number : \n");
	      scanf("%d" , &x);
	      printf("please enter sum to attracing :");
	      scanf("%lf",&z);
	      printf("%.2lf \n" , W(x , z));
	    }
	    
	    if(y == 'C'){
	      printf("please enter a number of account you wish to clos : \n");
	      scanf("%d" , &x);
	     C(x);
	    }
	    
	    if(y == 'L'){
	      printf("please enter an interest rate : \n");
	      scanf("%d" , &x);
	      L(x);
	    }
	    
	    if(y == 'P'){
	      P();
	      
	    }
	    
	    if(y == 'E'){
	      E();
	    }
	   
	  }
	  else
	    printf("Error ! \n");
	  
	}
}