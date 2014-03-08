#include "Stack.h"
#include <stdio.h>
#include "LinkedList.h"
#include "Institution.h"

Stack stack;

//Question 1
int Institution_reverse(LinkedList *inputList, LinkedList *outputList){
	
	Institution *institutionIn;		//For input of stack
	Institution *institutionOut;	//For output from stack
	int countList;					//To count amount of stack
	int forReturn;					//To return amount of stack
	
	institutionIn = List_removeHead(inputList);
	
	for(countList = 0; institutionIn != NULL ; countList++){
	Stack_push(&stack,institutionIn);
	institutionIn = List_removeHead(inputList);
	}
	
	forReturn = countList;			//To save countList value before it destroyed
	
	for(;countList > 0; countList--){
	institutionOut = Stack_pop(&stack);
	List_addTail(outputList, institutionOut);
	}
	
	return forReturn;

}