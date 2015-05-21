# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

bin_PROGRAMS = native-backend

native_backend_SOURCES = backend.cc
native_backend_CXXFLAGS = -std=c++11

backenddir = $(sysconfdir)/package-manager/backend

install-exec-hook:
	$(LN_S) $(DESTDIR)$(bindir)/native-backend$(EXEEXT) $(DESTDIR)$(backenddir)/rpm

uninstall-hook:
	cd $(backenddir) && test -h rpm && rm -f rpm
