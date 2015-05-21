# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

# AX_INIT
# -------
# Defines M4 variables for the build.
AC_DEFUN([AX_INIT],
[m4_define([ni_major_version], [0])
m4_define([ni_minor_version], [1])
m4_define([ni_version], [ni_major_version.ni_minor_version])
m4_define([ni_interface_age], [0])
m4_define([ni_binary_age], [m4_eval(100 * ni_minor_version)])
m4_define([lt_current], [m4_eval(100 * ni_minor_version - ni_interface_age)])
m4_define([lt_revision], [ni_interface_age])
m4_define([lt_age], [m4_eval(ni_binary_age - ni_interface_age)])
])

# AX_CONFIG_VERSION
# -----------------
# Exports version variables for config.status.
AC_DEFUN([AX_CONFIG_VERSION],
[NI_MAJOR_VERSION=ni_major_version
NI_MINOR_VERSION=ni_minor_version
NI_VERSION=ni_version
NI_LT_CURRENT=lt_current
NI_LT_REVISION=lt_revision
NI_LT_AGE=lt_age
NI_LT_VERSION="$NI_LT_CURRENT:$NI_LT_REVISION:$NI_LT_AGE"
NI_LT_DOTVERSION="${NI_LT_VERSION//:/.}"
NI_LT_LDFLAGS="-version-info $NI_LT_VERSION"

AC_SUBST(NI_MAJOR_VERSION)
AC_SUBST(NI_MINOR_VERSION)
AC_SUBST(NI_VERSION)
AC_SUBST(NI_LT_DOTVERSION)
AC_SUBST(NI_LT_LDFLAGS)
])
