#include <stdio.h>
#include <stdbool.h>

int main(){
	bool enable[] = {true, true};
	char service[100][100] = {"ssh", "slurm"};
	int i;
	
	for(i=0;i<(sizeof(enable)/sizeof(bool));i++)
		(enable[i] ? printf("%s: enable\n", service[i]) : printf("%s: disable\n", service[i]));
	
	return 0;
}
