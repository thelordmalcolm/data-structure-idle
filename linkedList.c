#include <stdio.h>
#include <string.h>
#include "linkedList.h"

//prints linked list operations
//definitions taken from tutorials point
void llOperations(){
	int operation =0;

	printf("%s\n", "1. Insertion");
	printf("%s\n", "2. Deletion");
	printf("%s\n", "3. All Operations");

	scanf("%d", &operation);

	switch(operation){
		case 1:
			printf("%s\n", "Insertion - adds an element at the beginning of the list");
			break;

		case 2:
			printf("%s\n", "Deletion - deletes an element at the beginning of the list");
			break;

		default:
			printf("%s\n", "ugh");
	}

}

void llTimeComplexities(){
	int operation =0;

	printf("%s\n", "1. Insertion");
	printf("%s\n", "2. Deletion");
	printf("%s\n", "3. All Complexities"); 

	scanf("%i", &operation);

	switch(operation){
		case 1:
			printf("%s\n", "insertion: O(1)");
			break;
		case 2:
			printf("%s\n", "deletion: O(1)");
			break;

		default:
			printf("%s\n", "ugh");
	}
}


void llIdle(){
	printf("%s\n", "To begin type {linkedList [type] [name]}");


	char declaration[100];
	char* structureType;
	char* dataType;
	char* name;

	scanf("%s", declaration);


	structureType = strtok(declaration, " ");
	dataType = strtok(declaration, " ");
	name = strtok(declaration, " ");

	printf("%s\n",structureType);

}