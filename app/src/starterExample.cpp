#include "starterExample.h"

uint32_t TestClass::addExample(uint16_t a, uint16_t b) {
  return (uint32_t)(a + b);
}

uint16_t TestClass::substractTestVariable(uint16_t a) {
  return (uint16_t)(a - TestVariable);
}

TestClass::TestClass() {}
TestClass::TestClass(uint8_t testVariable) {
  TestVariable = testVariable;
}
