lib_LTLIBRARIES = libnative-backend.la

libnative_backend_la_SOURCES = backend-lib.cc
libnative_backend_la_CXXFLAGS = -std=c++11

backenddir = $(sysconfdir)/package-manager/backendlib

install-exec-hook:
	$(LN_S) $(DESTDIR)$(libdir)/libnative-backend$(LIBEXT) \
	$(DESTDIR)$(backenddir)/librpm$(LIBEXT)
