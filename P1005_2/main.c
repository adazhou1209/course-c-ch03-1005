#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
    int grade =0 ;
    
    printf("請輸入成績\n");
   
   /* while(grade > 100 & grade < 0) {
    	printf("輸入錯誤");
	} */
     scanf("%d", &grade);
	}
    
    switch(grade / 10) {
    	
    	case 10: 
		case  9:
    	    printf("A");
    	    break;
    	
    	case 8:
    	    printf("B");
    	    break;
    		
    	case 7: 
    	    printf("C");
    	    break;
    		
    	case 6: 
    	    printf("D");
    	    break;
    }
