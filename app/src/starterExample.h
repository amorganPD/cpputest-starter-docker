#ifndef __STARTEREXAMPLE_H_
#define __STARTEREXAMPLE_H_

#include <stdint.h>

class TestClass {
  private:
    uint8_t TestVariable;
  public:
    TestClass();
    TestClass(uint8_t testVariable);
    uint16_t substractTestVariable(uint16_t);
    uint32_t addExample(uint16_t a, uint16_t b);
};

#endif // __STARTEREXAMPLE_H_
