#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

typedef struct{
	void *head;
	void *tail;
	}LinkedList;
	
//function prototype
void List_addTail(LinkedList *list, void *element);
void *List_removeHead(LinkedList *list);


#endif // __LINKEDLIST_H__