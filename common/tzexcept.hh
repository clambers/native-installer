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
