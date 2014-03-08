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



#endif // __INSTITUTION_H__