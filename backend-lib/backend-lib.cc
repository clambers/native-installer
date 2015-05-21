#include <iostream>

#ifdef _cplusplus
extern "C" {
#endif

int foo() {
  std::cout << "Hello world" << std::endl;
  return 0;
}

#ifdef _cplusplus
}
#endif
