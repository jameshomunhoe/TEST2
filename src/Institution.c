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

int Institution_select( LinkedList *inputList,
						LinkedList *outputList,
						void *criterion,
						int (*compare)(void *, void *)){
						
		void *institutionIn;
		int	countSimilar=0;
		int	i;
		
			institutionIn = List_removeHead(inputList);
		
		for(i=1;institutionIn!=NULL;i++){
			
			if(compare(institutionIn,criterion)){
				Stack_push(&stack,institutionIn);
				countSimilar++;
				printf("Institute number %d is similar\n",i);
			}
			else
				printf("Institute number %d is not similar\n",i);
			
			institutionIn = List_removeHead(inputList);
		}
		
		for(i=0; i<countSimilar; i++){
			institutionIn = Stack_pop(&stack);
			List_addTail(outputList, institutionIn);
		}
			
			//}while(&institutionIn != NULL);
	
	return countSimilar;		
}
						
				
int isUniversityCollege (void *elem1, void *type){
	
	if(((Institution *)elem1)->type == *(InstitutionType*)type){
	return 1;
	}
	else{
	return 0;
	}
		
}

int wasEstablishedBefore (void *elem1, void *year){
	
	if(((Institution *)elem1)->yearEstablished < *(int *)year){
	return 1;
	}
	else{
	return 0;
	}
		
}