#include <stdio.h>
#include <stdbool.h>

typedef struct service{
	char serv[100];
	bool enable;
}service;

int main(){
	service services[]={{"ssh", true}, {"slurm", true}};
	int i;
	
	for(i=0;i<(sizeof(services)/sizeof(service));i++)
		(services[i].enable ? printf("%s: enable\n", services[i]) : printf("%s: disable\n", services[i]));
	
	return 0;
}
