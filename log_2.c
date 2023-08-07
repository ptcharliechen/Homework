#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
	bool enable[] = {true, true};
	char service[100][100] = {"ssh", "slurm"};
	int i;
	
	for(i=0;i<(sizeof(service)/sizeof(char[100]));i++){
		if(strlen(service[i]) == 0)
			break;
		else if(enable[i])
			printf("%s: enable\n", service[i]);
		else
			printf("%s: disable\n", service[i]);
	}
	
	return 0;
}
