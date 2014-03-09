#include "unity.h"
#include "mock_Stack.h"
#include "mock_LinkedList.h"
#include "Institution.h"
#include "CException.h"






void setUp(){}

void tearDown(){}



void test_Institution_reverse_should_work_with_1_Institute(){





 Institution institution[1];

 LinkedList inputList;

 LinkedList outputList;



 inputList.head = &institution[0];

 inputList.tail = &institution[0];





 List_removeHead_CMockExpectAndReturn(22, &inputList, &institution[0]);

 Stack_push_CMockExpect(23, &stack, &institution[0]);





 List_removeHead_CMockExpectAndReturn(26, &inputList, ((void *)0));



 Stack_pop_CMockExpectAndReturn(28, &stack, &institution[0]);

 List_addTail_CMockExpect(29, &outputList, &institution[0]);





 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((Institution_reverse(&inputList, &outputList))), (((void *)0)), (_U_UINT)32, UNITY_DISPLAY_STYLE_INT);



}



void test_Institution_reverse_should_work_with_3_Institute(){





 Institution institution[3];

 LinkedList inputList;

 LinkedList outputList;



 inputList.head = &institution[0];

 inputList.tail = &institution[2];





 List_removeHead_CMockExpectAndReturn(47, &inputList, &institution[0]);

 Stack_push_CMockExpect(48, &stack, &institution[0]);

 List_removeHead_CMockExpectAndReturn(49, &inputList, &institution[1]);

 Stack_push_CMockExpect(50, &stack, &institution[1]);

 List_removeHead_CMockExpectAndReturn(51, &inputList, &institution[2]);

 Stack_push_CMockExpect(52, &stack, &institution[2]);





 List_removeHead_CMockExpectAndReturn(55, &inputList, ((void *)0));



 Stack_pop_CMockExpectAndReturn(57, &stack, &institution[2]);

 List_addTail_CMockExpect(58, &outputList, &institution[2]);

 Stack_pop_CMockExpectAndReturn(59, &stack, &institution[1]);

 List_addTail_CMockExpect(60, &outputList, &institution[1]);

 Stack_pop_CMockExpectAndReturn(61, &stack, &institution[0]);

 List_addTail_CMockExpect(62, &outputList, &institution[0]);





 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((Institution_reverse(&inputList, &outputList))), (((void *)0)), (_U_UINT)65, UNITY_DISPLAY_STYLE_INT);



}



void test_Institution_reverse_should_work_with_6_Institute(){





 Institution institution[6];

 LinkedList inputList;

 LinkedList outputList;



 inputList.head = &institution[0];

 inputList.tail = &institution[5];





 List_removeHead_CMockExpectAndReturn(80, &inputList, &institution[0]);

 Stack_push_CMockExpect(81, &stack, &institution[0]);

 List_removeHead_CMockExpectAndReturn(82, &inputList, &institution[1]);

 Stack_push_CMockExpect(83, &stack, &institution[1]);

 List_removeHead_CMockExpectAndReturn(84, &inputList, &institution[2]);

 Stack_push_CMockExpect(85, &stack, &institution[2]);

 List_removeHead_CMockExpectAndReturn(86, &inputList, &institution[3]);

 Stack_push_CMockExpect(87, &stack, &institution[3]);

 List_removeHead_CMockExpectAndReturn(88, &inputList, &institution[4]);

 Stack_push_CMockExpect(89, &stack, &institution[4]);

 List_removeHead_CMockExpectAndReturn(90, &inputList, &institution[5]);

 Stack_push_CMockExpect(91, &stack, &institution[5]);





 List_removeHead_CMockExpectAndReturn(94, &inputList, ((void *)0));



 Stack_pop_CMockExpectAndReturn(96, &stack, &institution[5]);

 List_addTail_CMockExpect(97, &outputList, &institution[5]);

 Stack_pop_CMockExpectAndReturn(98, &stack, &institution[4]);

 List_addTail_CMockExpect(99, &outputList, &institution[4]);

 Stack_pop_CMockExpectAndReturn(100, &stack, &institution[3]);

 List_addTail_CMockExpect(101, &outputList, &institution[3]);

 Stack_pop_CMockExpectAndReturn(102, &stack, &institution[2]);

 List_addTail_CMockExpect(103, &outputList, &institution[2]);

 Stack_pop_CMockExpectAndReturn(104, &stack, &institution[1]);

 List_addTail_CMockExpect(105, &outputList, &institution[1]);

 Stack_pop_CMockExpectAndReturn(106, &stack, &institution[0]);

 List_addTail_CMockExpect(107, &outputList, &institution[0]);





 UnityAssertEqualNumber((_U_SINT)((6)), (_U_SINT)((Institution_reverse(&inputList, &outputList))), (((void *)0)), (_U_UINT)110, UNITY_DISPLAY_STYLE_INT);



}



void test_isUniversityCollege_should_return_1_if_same_Institutiontype(){



 Institution institute={.type=UniversityCollege};

 InstitutionType type = {UniversityCollege};



 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((isUniversityCollege(&institute,&type))), (((void *)0)), (_U_UINT)119, UNITY_DISPLAY_STYLE_INT);

}



void test_isUniversityCollege_should_return_0_if_different_Institutiontype(){



 Institution institute={.type=College};

 InstitutionType type = {UniversityCollege};



 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((isUniversityCollege(&institute,&type))), (((void *)0)), (_U_UINT)127, UNITY_DISPLAY_STYLE_INT);

}



void test_Institution_select_should_show_1_similarities(){



 Institution institution[]={ {.type = Unknown},

         {.type = University},

         {.type = UniversityCollege},

         {.type = College}};



 InstitutionType selectedType = {UniversityCollege};

 LinkedList inputList;

 LinkedList outputList;





 List_removeHead_CMockExpectAndReturn(142, &inputList, &institution[0]);



 List_removeHead_CMockExpectAndReturn(144, &inputList, &institution[1]);



 List_removeHead_CMockExpectAndReturn(146, &inputList, &institution[2]);

 Stack_push_CMockExpect(147, &stack, &institution[2]);



 List_removeHead_CMockExpectAndReturn(149, &inputList, &institution[3]);





 List_removeHead_CMockExpectAndReturn(152, &inputList, ((void *)0));



 Stack_pop_CMockExpectAndReturn(154, &stack, &institution[2]);

 List_addTail_CMockExpect(155, &outputList, &institution[2]);





 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((Institution_select( &inputList, &outputList, &selectedType, isUniversityCollege))), (((void *)0)), (_U_UINT)161, UNITY_DISPLAY_STYLE_INT)





                           ;



 }



void test_Institution_select_should_show_2_similarities(){



 Institution institution[]={ {.type = Unknown},

         {.type = University},

         {.type = UniversityCollege},

         {.type = UniversityCollege}};



 InstitutionType selectedType = {UniversityCollege};

 LinkedList inputList;

 LinkedList outputList;





 List_removeHead_CMockExpectAndReturn(177, &inputList, &institution[0]);



 List_removeHead_CMockExpectAndReturn(179, &inputList, &institution[1]);



 List_removeHead_CMockExpectAndReturn(181, &inputList, &institution[2]);

 Stack_push_CMockExpect(182, &stack, &institution[2]);



 List_removeHead_CMockExpectAndReturn(184, &inputList, &institution[3]);

 Stack_push_CMockExpect(185, &stack, &institution[3]);





 List_removeHead_CMockExpectAndReturn(188, &inputList, ((void *)0));



 Stack_pop_CMockExpectAndReturn(190, &stack, &institution[2]);

 List_addTail_CMockExpect(191, &outputList, &institution[2]);

 Stack_pop_CMockExpectAndReturn(192, &stack, &institution[3]);

 List_addTail_CMockExpect(193, &outputList, &institution[3]);





 UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((Institution_select( &inputList, &outputList, &selectedType, isUniversityCollege))), (((void *)0)), (_U_UINT)199, UNITY_DISPLAY_STYLE_INT)





                           ;



 }



void test_wasEstablishedBefore_should_return_1_for_lesser_yearEstablished_0_for_more(){



 Institution institute[]={{.yearEstablished=1960},{.yearEstablished=2013}};

 int yearToCompare = 1980;



 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((wasEstablishedBefore(&institute[0],&yearToCompare))), (((void *)0)), (_U_UINT)208, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((wasEstablishedBefore(&institute[1],&yearToCompare))), (((void *)0)), (_U_UINT)209, UNITY_DISPLAY_STYLE_INT);

}



void test_wasEstablishedBefore_should_throw_error_exception(){



 Institution institute[]={{.yearEstablished=2015}};

 int yearToCompare = 1960;

 int exceptionCatch;



 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame){

  wasEstablishedBefore(&institute[0],&yearToCompare);

 } else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { exceptionCatch = CExceptionFrames[MY_ID].Exception; exceptionCatch=exceptionCatch; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A)){

  UnityAssertEqualNumber((_U_SINT)((ERROR_YEAR)), (_U_SINT)((exceptionCatch)), (((void *)0)), (_U_UINT)221, UNITY_DISPLAY_STYLE_INT);

 }



}



void test_wasEstablishedBefore_should_not_throw_error_exception(){



 Institution institute[]={{.yearEstablished=2012}};

 int yearToCompare = 1960;

 int exceptionCatch;



 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame){

  wasEstablishedBefore(&institute[0],&yearToCompare);

 } else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { exceptionCatch = CExceptionFrames[MY_ID].Exception; exceptionCatch=exceptionCatch; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A)){

  UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((exceptionCatch)), (((void *)0)), (_U_UINT)235, UNITY_DISPLAY_STYLE_INT);

 }

}



void test_Institution_select_should_show_yearEstablished_less_than_1980(){



  Institution institution[]={ {.yearEstablished = 1979},

         {.yearEstablished = 1988},

         {.yearEstablished = 2013},

         {.yearEstablished = 1912}};



 int selectedYear = 1980;

 LinkedList inputList;

 LinkedList outputList;





 List_removeHead_CMockExpectAndReturn(251, &inputList, &institution[0]);

 Stack_push_CMockExpect(252, &stack, &institution[0]);



 List_removeHead_CMockExpectAndReturn(254, &inputList, &institution[1]);



 List_removeHead_CMockExpectAndReturn(256, &inputList, &institution[2]);



 List_removeHead_CMockExpectAndReturn(258, &inputList, &institution[3]);

 Stack_push_CMockExpect(259, &stack, &institution[3]);





 List_removeHead_CMockExpectAndReturn(262, &inputList, ((void *)0));



 Stack_pop_CMockExpectAndReturn(264, &stack, &institution[3]);

 List_addTail_CMockExpect(265, &outputList, &institution[3]);



 Stack_pop_CMockExpectAndReturn(267, &stack, &institution[0]);

 List_addTail_CMockExpect(268, &outputList, &institution[0]);





 UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((Institution_select( &inputList, &outputList, &selectedYear, wasEstablishedBefore))), (((void *)0)), (_U_UINT)274, UNITY_DISPLAY_STYLE_INT)





                            ;

}



void test_Institution_select_should_show_yearEstablished_more_than_2014(){



  Institution institution[]={ {.yearEstablished = 1979},

         {.yearEstablished = 1970},

         {.yearEstablished = 2015},

         {.yearEstablished = 1912}};



 int selectedYear = 1980;

 int exceptionCatch;

 LinkedList inputList;

 LinkedList outputList;





 List_removeHead_CMockExpectAndReturn(290, &inputList, &institution[0]);

 Stack_push_CMockExpect(291, &stack, &institution[0]);



 List_removeHead_CMockExpectAndReturn(293, &inputList, &institution[1]);

 Stack_push_CMockExpect(294, &stack, &institution[1]);



 List_removeHead_CMockExpectAndReturn(296, &inputList, &institution[2]);









 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame) {

  Institution_select(&inputList,

       &outputList,

       &selectedYear,

       wasEstablishedBefore);

 } else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { exceptionCatch = CExceptionFrames[MY_ID].Exception; exceptionCatch=exceptionCatch; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A)) {

  UnityAssertEqualNumber((_U_SINT)((ERROR_YEAR)), (_U_SINT)((exceptionCatch)), (((void *)0)), (_U_UINT)307, UNITY_DISPLAY_STYLE_INT);

 }

}
