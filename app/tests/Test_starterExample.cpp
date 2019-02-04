#include "CppUTest/TestHarness.h"
#include "starterExample.h"
 
TEST_GROUP(startExamples) {
};
 
TEST(startExamples, Expect1) {
  int actual = starterExample_function();
  CHECK_EQUAL(1, actual);
}
