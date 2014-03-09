#include "unity.h"
#include "mock_LinkedList.h"
#include "mock_Stack.h"
#include "Institution.h"

void setUp(){}
void tearDown(){}

void test_Institution_reverse_should_work_with_1_Institute(){
	
	//Test fixture
	Institution institution[1];
	LinkedList inputList;
	LinkedList outputList;
	
	inputList.head = &institution[0];
	inputList.tail = &institution[0];
	
	//Mock
	List_removeHead_ExpectAndReturn(&inputList,&institution[0]);
	Stack_push_Expect(&stack, &institution[0]);

	//Put fake NULL to know when to stop
	List_removeHead_ExpectAndReturn(&inputList,NULL);
	
	Stack_pop_ExpectAndReturn(&stack,&institution[0]);
	List_addTail_Expect(&outputList, &institution[0]);
	
	//Call function
	TEST_ASSERT_EQUAL(1,Institution_reverse(&inputList, &outputList));
	
}

void test_Institution_reverse_should_work_with_3_Institute(){
	
	//Test fixture
	Institution institution[3];
	LinkedList inputList;
	LinkedList outputList;
	
	inputList.head = &institution[0];
	inputList.tail = &institution[2];
	
	//Mock
	List_removeHead_ExpectAndReturn(&inputList,&institution[0]);
	Stack_push_Expect(&stack, &institution[0]);
	List_removeHead_ExpectAndReturn(&inputList,&institution[1]);
	Stack_push_Expect(&stack, &institution[1]);
	List_removeHead_ExpectAndReturn(&inputList,&institution[2]);
	Stack_push_Expect(&stack, &institution[2]);
	
	//Put fake NULL to know when to stop
	List_removeHead_ExpectAndReturn(&inputList,NULL);
	
	Stack_pop_ExpectAndReturn(&stack,&institution[2]);
	List_addTail_Expect(&outputList, &institution[2]);
	Stack_pop_ExpectAndReturn(&stack,&institution[1]);
	List_addTail_Expect(&outputList, &institution[1]);
	Stack_pop_ExpectAndReturn(&stack,&institution[0]);
	List_addTail_Expect(&outputList, &institution[0]);
	
	//Call function
	TEST_ASSERT_EQUAL(3,Institution_reverse(&inputList, &outputList));
	
}

void test_Institution_reverse_should_work_with_6_Institute(){
	
	//Test fixture
	Institution institution[6];
	LinkedList inputList;
	LinkedList outputList;
	
	inputList.head = &institution[0];
	inputList.tail = &institution[5];
	
	//Mock
	List_removeHead_ExpectAndReturn(&inputList,&institution[0]);
	Stack_push_Expect(&stack, &institution[0]);
	List_removeHead_ExpectAndReturn(&inputList,&institution[1]);
	Stack_push_Expect(&stack, &institution[1]);
	List_removeHead_ExpectAndReturn(&inputList,&institution[2]);
	Stack_push_Expect(&stack, &institution[2]);
	List_removeHead_ExpectAndReturn(&inputList,&institution[3]);
	Stack_push_Expect(&stack, &institution[3]);
	List_removeHead_ExpectAndReturn(&inputList,&institution[4]);
	Stack_push_Expect(&stack, &institution[4]);
	List_removeHead_ExpectAndReturn(&inputList,&institution[5]);
	Stack_push_Expect(&stack, &institution[5]);
	
	//Put fake NULL to know when to stop
	List_removeHead_ExpectAndReturn(&inputList,NULL);
	
	Stack_pop_ExpectAndReturn(&stack,&institution[5]);
	List_addTail_Expect(&outputList, &institution[5]);
	Stack_pop_ExpectAndReturn(&stack,&institution[4]);
	List_addTail_Expect(&outputList, &institution[4]);
	Stack_pop_ExpectAndReturn(&stack,&institution[3]);
	List_addTail_Expect(&outputList, &institution[3]);
	Stack_pop_ExpectAndReturn(&stack,&institution[2]);
	List_addTail_Expect(&outputList, &institution[2]);
	Stack_pop_ExpectAndReturn(&stack,&institution[1]);
	List_addTail_Expect(&outputList, &institution[1]);
	Stack_pop_ExpectAndReturn(&stack,&institution[0]);
	List_addTail_Expect(&outputList, &institution[0]);
	
	//Call function
	TEST_ASSERT_EQUAL(6,Institution_reverse(&inputList, &outputList));
	
}

void test_isUniversityCollege_should_return_1_if_same_Institutiontype(){

	Institution institute={.type=UniversityCollege};
	InstitutionType type = {UniversityCollege};
	
	TEST_ASSERT_EQUAL(1,isUniversityCollege(&institute,&type));
}

void test_isUniversityCollege_should_return_0_if_different_Institutiontype(){

	Institution institute={.type=College};
	InstitutionType type = {UniversityCollege};
	
	TEST_ASSERT_EQUAL(0,isUniversityCollege(&institute,&type));
}

// void test_only(){

	// Institution institute[]={ {.type = Unknown},
							  // {.type = University},
							  // {.type = UniversityCollege},
							  // {.type = College}};
	
	// InstitutionType selectedType = {
	// LinkedList inputList;
	// LinkedList outputList;

	// printf("%d\n", institute[0].type);
	// printf("%d\n", institute[1].type);
	// printf("%d\n", institute[2].type);




// int Institution_select( LinkedList *inputList,
						// LinkedList *outputList,
						// void *criterion,
						// int (*compare)(void *, void *))

// }