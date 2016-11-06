#include <stdio.h>
#include "linkedList.c"
#include "linkedList.h"

//data structure arguments
void dataStructure(int val){
	int i;

	switch(val){

		case 0:
			printf("%s\n", divider);
			printf("%s\n", ">> 1. linkedList Operations");
			printf("%s\n", ">> 2. linkedList Time Complexities");
			printf("%s\n", ">> 3. linkedList IDLE");			
			printf("%s", ">>");
			scanf("%i", &i);

			if(i == 1){
				printf("%s\n",divider);
				llOperations();				
			}
			else if(i == 2){
				printf("%s\n",divider);
				llTimeComplexities();	
			}
			else if(i ==3){
				printf("%s\n",divider);
				llIdle();
			}
			else{
				printf("%s\n", "ugh");
			}

			break;

		case 1:
			printf("%s\n", "1. Array Operations");
			printf("%s\n", "2. Array Time Complexities");
			scanf("%i", &i);

			if(i == 1){
				printf("%s\n",divider);
				llOperations();				
			}
			else{
				printf("%s\n", "ugh");
			}
			break;
			
		default:
			printf("%s\n", "try again");

	}

}