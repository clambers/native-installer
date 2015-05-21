# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

AX_INIT

AC_PREREQ([2.69])

AC_INIT([Native Installer], [ni_version],
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
AC_PROG_LN_S

AX_CONFIG_VERSION

AC_CONFIG_HEADERS([common/tzconfig.hh])
AC_CONFIG_FILES([Makefile common/Makefile backend/Makefile
backend-lib/Makefile])

AC_OUTPUT
