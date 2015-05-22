# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

libsubdir = $(libdir)/$(PACKAGE_TARNAME)
lib_LTLIBRARIES = backendlib.la

backendlib_la_SOURCES = backend-lib.cc
backendlib_la_CXXFLAGS = -std=c++11
backendlib_la_LDFLAGS = -module $(NI_LT_LDFLAGS)

backlibdir = $(sysconfdir)/package-manager/backendlib

install-exec-hook:
	$(MKDIR_P) $(DESTDIR)$(backlibdir)
	$(LN_S) $(DESTDIR)$(libsubdir)/backendlib.so $(DESTDIR)$(backlibdir)/librpm.so

uninstall-hook:
	cd $(DESTDIR)$(backlibdir) && test -h librpm.so && rm -f librpm.so
