#include <stdio.h>
#include <string.h>
#include "run.h"

int main(int argc, char* argv[]){
	char input[100];
	int value;

	if(argc > 2){
		printf("%s\n", "too many arguments" );
	}else{

		printf("%s", ">> Data Structure: " );
		scanf("%s", input);

		if(strcmp(input,"linkedlist")==0){value = 0;}
		else if(strcmp(input,"array")==0){value = 1;}
		else{printf("%s\n", "no clue");}

		dataStructure(value);

	}
}