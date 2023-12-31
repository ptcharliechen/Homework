#include <stdio.h>

int main(){
	
	//method 1
	int a1 = 1;
    int a2 = 0;
    switch(a1){
    	case 0:
    		a2 = 0;
    		break;
    	default:
    		a2 = 123;
    		break;
	}
        
    printf("a2: %d\n", a2);
    
    //method 2
    a1 = 123;
    a2 = (a1 ? 123 : 0);
    
    printf("a2: %d\n", a2);
    
    //method 1
    int val = 1;
    
    switch(val){
    	case 0:
    		val = 123;
    		break;
    	default:
    		val = 1;
    		break;
	}
	printf("val: %d\n", val);
	
	//method 2
	val = 1;
    a2 = (!val ? 123 : 0);
    
    printf("val: %d\n", val);
    
	return 0;
}
