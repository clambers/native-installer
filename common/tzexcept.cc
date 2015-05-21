/**
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */

#include "tzexcept.hh"
#include <cstdlib>
#include <cstring>
#include <cerrno>

std::ostringstream tz::tizen_error::msg;

tz::tizen_error::tizen_error(int err)
  : std::runtime_error("tizen error: "), err(std::abs(err)) {}

char const* tz::tizen_error::what() const throw() {
  msg.str("");
  msg << std::runtime_error::what() << std::strerror(err);
  return msg.str().c_str();
}
