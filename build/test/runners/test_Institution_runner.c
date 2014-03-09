/* AUTOGENERATED FILE. DO NOT EDIT. */

//=======Test Runner Used To Run Each Test Below=====
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      CMock_Init(); \
      setUp(); \
      TestFunc(); \
      CMock_Verify(); \
  } \
  CMock_Destroy(); \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

//=======Automagically Detected Files To Include=====
#include "unity.h"
#include "cmock.h"
#include <setjmp.h>
#include <stdio.h>
#include "mock_LinkedList.h"
#include "mock_Stack.h"

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

//=======External Functions This Runner Calls=====
extern void setUp(void);
extern void tearDown(void);
extern void test_Institution_reverse_should_work_with_1_Institute(void);
extern void test_Institution_reverse_should_work_with_3_Institute(void);
extern void test_Institution_reverse_should_work_with_6_Institute(void);
extern void test_isUniversityCollege_should_return_1_if_same_Institutiontype(void);
extern void test_isUniversityCollege_should_return_0_if_different_Institutiontype(void);
extern void test_Institution_select_should_show_1_similarities(void);
extern void test_Institution_select_should_show_2_similarities(void);


//=======Mock Management=====
static void CMock_Init(void)
{
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
  GlobalOrderError = NULL;
  mock_LinkedList_Init();
  mock_Stack_Init();
}
static void CMock_Verify(void)
{
  mock_LinkedList_Verify();
  mock_Stack_Verify();
}
static void CMock_Destroy(void)
{
  mock_LinkedList_Destroy();
  mock_Stack_Destroy();
}

//=======Test Reset Option=====
void resetTest()
{
  CMock_Verify();
  CMock_Destroy();
  tearDown();
  CMock_Init();
  setUp();
}


//=======MAIN=====
int main(void)
{
  Unity.TestFile = "test_Institution.c";
  UnityBegin();
  RUN_TEST(test_Institution_reverse_should_work_with_1_Institute, 9);
  RUN_TEST(test_Institution_reverse_should_work_with_3_Institute, 34);
  RUN_TEST(test_Institution_reverse_should_work_with_6_Institute, 67);
  RUN_TEST(test_isUniversityCollege_should_return_1_if_same_Institutiontype, 112);
  RUN_TEST(test_isUniversityCollege_should_return_0_if_different_Institutiontype, 120);
  RUN_TEST(test_Institution_select_should_show_1_similarities, 128);
  RUN_TEST(test_Institution_select_should_show_2_similarities, 163);

  return (UnityEnd());
}
