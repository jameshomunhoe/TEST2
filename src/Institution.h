#ifndef __INSTITUTION_H__
#define __INSTITUTION_H__

extern Stack stack;

typedef enum{Unknown, University, UniversityCollege, College} InstitutionType;

typedef struct Institution_t{
	char *name;
	char *address;
	unsigned long postcode;
	unsigned long int telephone;
	InstitutionType type;
	int yearEstablished;
	}Institution;
	
//function prototype
int Institution_reverse(LinkedList *inputList, LinkedList *outputList);

int Institution_select( LinkedList *inputList,
						LinkedList *outputList,
						void *criterion,
						int (*compare)(void *, void *));
						
int isUniversityCollege (void *elem1, void *type);

#endif // __INSTITUTION_H__