#include <stdio.h>

int main(){
	int i=0, input;
	double sum=0;
	
	for( ; ; ){
		if(scanf("%d", &input) != EOF){
			sum += input;
			i++;
			printf("Averge: %.4lf, (input ^Z to exit)\n", sum / i);
		}
		else{
			printf("Bye~");
			break;
		}	
	}
	
	return 0;
}
