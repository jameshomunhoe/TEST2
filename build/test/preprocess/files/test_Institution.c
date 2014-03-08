#include "unity.h"
#include "mock_Stack.h"
#include "mock_LinkedList.h"
#include "Institution.h"


void setUp(){}

void tearDown(){}



void test_Institution_reverse_should_work_with_1_Institute(){





 Institution institution[1];

 LinkedList inputList;

 LinkedList outputList;



 inputList.head = &institution[0];

 inputList.tail = &institution[0];





 List_removeHead_CMockExpectAndReturn(20, &inputList, &institution[0]);

 Stack_push_CMockExpect(21, &stack, &institution[0]);





 List_removeHead_CMockExpectAndReturn(24, &inputList, ((void *)0));



 Stack_pop_CMockExpectAndReturn(26, &stack, &institution[0]);

 List_addTail_CMockExpect(27, &outputList, &institution[0]);





 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((Institution_reverse(&inputList, &outputList))), (((void *)0)), (_U_UINT)30, UNITY_DISPLAY_STYLE_INT);



}



void test_Institution_reverse_should_work_with_3_Institute(){





 Institution institution[3];

 LinkedList inputList;

 LinkedList outputList;



 inputList.head = &institution[0];

 inputList.tail = &institution[2];





 List_removeHead_CMockExpectAndReturn(45, &inputList, &institution[0]);

 Stack_push_CMockExpect(46, &stack, &institution[0]);

 List_removeHead_CMockExpectAndReturn(47, &inputList, &institution[1]);

 Stack_push_CMockExpect(48, &stack, &institution[1]);

 List_removeHead_CMockExpectAndReturn(49, &inputList, &institution[2]);

 Stack_push_CMockExpect(50, &stack, &institution[2]);





 List_removeHead_CMockExpectAndReturn(53, &inputList, ((void *)0));



 Stack_pop_CMockExpectAndReturn(55, &stack, &institution[2]);

 List_addTail_CMockExpect(56, &outputList, &institution[2]);

 Stack_pop_CMockExpectAndReturn(57, &stack, &institution[1]);

 List_addTail_CMockExpect(58, &outputList, &institution[1]);

 Stack_pop_CMockExpectAndReturn(59, &stack, &institution[0]);

 List_addTail_CMockExpect(60, &outputList, &institution[0]);





 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((Institution_reverse(&inputList, &outputList))), (((void *)0)), (_U_UINT)63, UNITY_DISPLAY_STYLE_INT);



}



void test_Institution_reverse_should_work_with_6_Institute(){





 Institution institution[6];

 LinkedList inputList;

 LinkedList outputList;



 inputList.head = &institution[0];

 inputList.tail = &institution[5];





 List_removeHead_CMockExpectAndReturn(78, &inputList, &institution[0]);

 Stack_push_CMockExpect(79, &stack, &institution[0]);

 List_removeHead_CMockExpectAndReturn(80, &inputList, &institution[1]);

 Stack_push_CMockExpect(81, &stack, &institution[1]);

 List_removeHead_CMockExpectAndReturn(82, &inputList, &institution[2]);

 Stack_push_CMockExpect(83, &stack, &institution[2]);

 List_removeHead_CMockExpectAndReturn(84, &inputList, &institution[3]);

 Stack_push_CMockExpect(85, &stack, &institution[3]);

 List_removeHead_CMockExpectAndReturn(86, &inputList, &institution[4]);

 Stack_push_CMockExpect(87, &stack, &institution[4]);

 List_removeHead_CMockExpectAndReturn(88, &inputList, &institution[5]);

 Stack_push_CMockExpect(89, &stack, &institution[5]);





 List_removeHead_CMockExpectAndReturn(92, &inputList, ((void *)0));



 Stack_pop_CMockExpectAndReturn(94, &stack, &institution[5]);

 List_addTail_CMockExpect(95, &outputList, &institution[5]);

 Stack_pop_CMockExpectAndReturn(96, &stack, &institution[4]);

 List_addTail_CMockExpect(97, &outputList, &institution[4]);

 Stack_pop_CMockExpectAndReturn(98, &stack, &institution[3]);

 List_addTail_CMockExpect(99, &outputList, &institution[3]);

 Stack_pop_CMockExpectAndReturn(100, &stack, &institution[2]);

 List_addTail_CMockExpect(101, &outputList, &institution[2]);

 Stack_pop_CMockExpectAndReturn(102, &stack, &institution[1]);

 List_addTail_CMockExpect(103, &outputList, &institution[1]);

 Stack_pop_CMockExpectAndReturn(104, &stack, &institution[0]);

 List_addTail_CMockExpect(105, &outputList, &institution[0]);





 UnityAssertEqualNumber((_U_SINT)((6)), (_U_SINT)((Institution_reverse(&inputList, &outputList))), (((void *)0)), (_U_UINT)108, UNITY_DISPLAY_STYLE_INT);



}
