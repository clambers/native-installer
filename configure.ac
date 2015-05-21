AC_PREREQ([2.69])

AC_INIT([Native Installer], [0.1],
[https://github.com/clambers/native-installer/issues], [],
[https://github.com/clambers/native-installer])

AC_COPYRIGHT([Copyright (C) 2015 Chris Lamberson.])
AC_CONFIG_SRCDIR([backend/backend.cc])
AC_CONFIG_AUX_DIR([build-aux])
AC_CONFIG_MACRO_DIR([m4])

AM_INIT_AUTOMAKE([1.14 foreign -Wall -Werror -Wno-portability])
AM_SILENT_RULES([yes])

LT_INIT

AC_PROG_CXX
PKG_CHECK_MODULES([dlog], [dlog])

AC_CONFIG_HEADERS([common/tzconfig.hh])
AC_CONFIG_FILES([Makefile common/Makefile backend/Makefile
backend-lib/Makefile])

AC_OUTPUT
