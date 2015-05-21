# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

lib_LTLIBRARIES = libnative-backend.la

libnative_backend_la_SOURCES = backend-lib.cc
libnative_backend_la_CXXFLAGS = -std=c++11
libnative_backend_la_LDFLAGS = $(NI_LT_LDFLAGS)

backlibdir = $(sysconfdir)/package-manager/backendlib

install-exec-hook:
	$(MKDIR_P) $(backlibdir)
	$(LN_S) $(DESTDIR)$(libdir)/libnative-backend.so.$(NI_LT_DOTVERSION) $(DESTDIR)$(backlibdir)/librpm.so

uninstall-hook:
	cd $(backlibdir) && test -h librpm.so && rm -f librpm.so
