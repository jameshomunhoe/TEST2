#include "Institution.h"
#include "LinkedList.h"
#include "Stack.h"
#include "CException.h"
#include <stdio.h>




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

int Institution_select( LinkedList *inputList,
						LinkedList *outputList,
						void *criterion,
						int (*compare)(void *, void *)){
						
		void *institutionIn;	//For input of stack
		int	countSimilar=0;		//For output of stack
		int	i;					//For counter purpose
		
			institutionIn = List_removeHead(inputList);
		
		for(i=1;institutionIn!=NULL;){
			
			if(compare(institutionIn,criterion)){
				Stack_push(&stack,institutionIn);
				countSimilar++;
			}
				
			institutionIn = List_removeHead(inputList);
		}
		
		for(i=0; i<countSimilar; i++){
			institutionIn = Stack_pop(&stack);
			List_addTail(outputList, institutionIn);
		}
			
	
	return countSimilar;		
}
						
				
int isUniversityCollege (void *elem1, void *type){
	
	//compare
	if(((Institution *)elem1)->type == *(InstitutionType*)type){
	return 1;
	}
	else{
	return 0;
	}
		
}

int wasEstablishedBefore (void *elem1, void *year){
	
	//compare
	if(((Institution *)elem1)->yearEstablished < *(int *)year){
	return 1;
	}
	
	else if(((Institution *)elem1)->yearEstablished > 2014) {
		Throw(ERROR_YEAR); //Only able to throw in this error, otherwise will affect other TEST_ASSERT
	return 0;
	}
	
	else
	return 0;
	
}
