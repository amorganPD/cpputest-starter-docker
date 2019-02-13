#include "CppUTest/TestHarness.h"
#include "starterExample.h"
 
TEST_GROUP(TestClass) {
};

TEST(TestClass, tryAddExample1to1_Expect2) {
  TestClass testObject;

  CHECK_EQUAL(2, testObject.addExample(1, 1));
}

TEST(TestClass, tryAddExample1000to200_Expect1200) {
  TestClass testObject;

  CHECK_EQUAL(1200, testObject.addExample(1000, 200));
}

TEST(TestClass, trySubstractTestVariable10from20_Expect10) {
  TestClass testObject(10);

  CHECK_EQUAL(10, testObject.substractTestVariable(20));
}
