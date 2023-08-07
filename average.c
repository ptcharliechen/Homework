#include <stdio.h>

int main(){
	int input, i=0;
	double sum=0;
	
	for( ; ; ){
		scanf("%d", &input);
		if(input >= 0){
			sum += input;
			i++;
			printf("Averge: %.4lf, (input < 0 to exit)\n", sum / i);
		}
		else{
			printf("Bye~");
			break;
		}	
	}
	
	return 0;
}
