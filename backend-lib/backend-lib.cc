/**
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */

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
