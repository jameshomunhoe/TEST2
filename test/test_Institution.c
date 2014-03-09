#include "unity.h"
#include "Institution.h"
#include "mock_LinkedList.h"
#include "mock_Stack.h"
#include "CException.h"


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

void test_Institution_select_should_show_1_similarities(){

	Institution institution[]={ {.type = Unknown},
							  {.type = University},
							  {.type = UniversityCollege},
							  {.type = College}};
	
	InstitutionType selectedType = {UniversityCollege};
	LinkedList inputList;
	LinkedList outputList;
	
	//Mocking. Do not stackPush if different
	List_removeHead_ExpectAndReturn(&inputList,&institution[0]);
	
	List_removeHead_ExpectAndReturn(&inputList,&institution[1]);
	
	List_removeHead_ExpectAndReturn(&inputList,&institution[2]);
	Stack_push_Expect(&stack, &institution[2]);
	
	List_removeHead_ExpectAndReturn(&inputList,&institution[3]);
	
	//Put fake NULL to know when to stop
	List_removeHead_ExpectAndReturn(&inputList,NULL);
	
	Stack_pop_ExpectAndReturn(&stack,&institution[2]);
	List_addTail_Expect(&outputList, &institution[2]);

	//Call function
	TEST_ASSERT_EQUAL(1,Institution_select( &inputList,
						&outputList,
						&selectedType,
						isUniversityCollege));

 }
 
void test_Institution_select_should_show_2_similarities(){

	Institution institution[]={ {.type = Unknown},
							  {.type = University},
							  {.type = UniversityCollege},
							  {.type = UniversityCollege}};
	
	InstitutionType selectedType = {UniversityCollege};
	LinkedList inputList;
	LinkedList outputList;
	
	//Mocking. Do not stackPush if different
	List_removeHead_ExpectAndReturn(&inputList,&institution[0]);
	
	List_removeHead_ExpectAndReturn(&inputList,&institution[1]);
	
	List_removeHead_ExpectAndReturn(&inputList,&institution[2]);
	Stack_push_Expect(&stack, &institution[2]);
	
	List_removeHead_ExpectAndReturn(&inputList,&institution[3]);
	Stack_push_Expect(&stack, &institution[3]);
	
	//Put fake NULL to know when to stop
	List_removeHead_ExpectAndReturn(&inputList,NULL);
	
	Stack_pop_ExpectAndReturn(&stack,&institution[2]);
	List_addTail_Expect(&outputList, &institution[2]);
	Stack_pop_ExpectAndReturn(&stack,&institution[3]);
	List_addTail_Expect(&outputList, &institution[3]);

	//Call function
	TEST_ASSERT_EQUAL(2,Institution_select( &inputList,
						&outputList,
						&selectedType,
						isUniversityCollege));

 }
 
void test_wasEstablishedBefore_should_return_1_for_lesser_yearEstablished_0_for_more(){
	
	Institution institute[]={{.yearEstablished=1960},{.yearEstablished=2013}};
	int yearToCompare = 1980;
	
	TEST_ASSERT_EQUAL(1,wasEstablishedBefore(&institute[0],&yearToCompare));
	TEST_ASSERT_EQUAL(0,wasEstablishedBefore(&institute[1],&yearToCompare));
}

void test_wasEstablishedBefore_should_throw_error_exception(){

	Institution institute[]={{.yearEstablished=2015}};
	int yearToCompare = 1960;
	int exceptionCatch;
	
	Try{
		wasEstablishedBefore(&institute[0],&yearToCompare);
	} Catch(exceptionCatch){
		TEST_ASSERT_EQUAL(ERROR_YEAR,exceptionCatch);//will catch ERROR_YEAR
	}
	
}

void test_wasEstablishedBefore_should_not_throw_error_exception(){

	Institution institute[]={{.yearEstablished=2012}};
	int yearToCompare = 1960;
	int exceptionCatch;
	
	Try{
		wasEstablishedBefore(&institute[0],&yearToCompare);
	} Catch(exceptionCatch){
		TEST_ASSERT_EQUAL(0,exceptionCatch); //Will not catch, because no throw
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
	
	//Mocking. Do not stackPush if different
	List_removeHead_ExpectAndReturn(&inputList,&institution[0]);
	Stack_push_Expect(&stack, &institution[0]);
	
	List_removeHead_ExpectAndReturn(&inputList,&institution[1]);
	
	List_removeHead_ExpectAndReturn(&inputList,&institution[2]);
	
	List_removeHead_ExpectAndReturn(&inputList,&institution[3]);
	Stack_push_Expect(&stack, &institution[3]);
	
	//Put fake NULL to know when to stop
	List_removeHead_ExpectAndReturn(&inputList,NULL);
	
	Stack_pop_ExpectAndReturn(&stack,&institution[3]);
	List_addTail_Expect(&outputList, &institution[3]);

	Stack_pop_ExpectAndReturn(&stack,&institution[0]);
	List_addTail_Expect(&outputList, &institution[0]);
	
	//Call function
	TEST_ASSERT_EQUAL(2,Institution_select( &inputList,
						&outputList,
						&selectedYear,
						wasEstablishedBefore));
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
	
	//Mocking. Do not stackPush if different
	List_removeHead_ExpectAndReturn(&inputList,&institution[0]);
	Stack_push_Expect(&stack, &institution[0]);
	
	List_removeHead_ExpectAndReturn(&inputList,&institution[1]);
	Stack_push_Expect(&stack, &institution[1]);
	
	List_removeHead_ExpectAndReturn(&inputList,&institution[2]);
	//end here, exception thrown
	
	
	//Call function to try exceptions
	Try {
		Institution_select(&inputList,
							&outputList,
							&selectedYear,
							wasEstablishedBefore);
	} Catch (exceptionCatch) {
		TEST_ASSERT_EQUAL(ERROR_YEAR, exceptionCatch);
	}
}



