# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

libsubdir = $(libdir)/$(PACKAGE_TARNAME)
libsub_PROGRAMS = backend

backend_SOURCES = backend.cc
backend_CXXFLAGS = -std=c++11

backdir = $(sysconfdir)/package-manager/backend

install-exec-hook:
	$(MKDIR_P) $(DESTDIR)$(backdir)
	$(LN_S) $(DESTDIR)$(libsubdir)/backend$(EXEEXT) $(DESTDIR)$(backdir)/rpm

uninstall-hook:
	cd $(DESTDIR)$(backdir) && test -h rpm && rm -f rpm
