/**
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */

#ifndef TZ_EXCEPT_HH
#define TZ_EXCEPT_HH

#include <exception>
#include <stdexcept>
#include <sstream>

namespace tz {
  class tizen_error : public std::runtime_error {
  public:
    tizen_error(int);
    virtual char const* what() const throw() override;

  private:
    static std::ostringstream msg;
    int err;
  };
}

#endif
