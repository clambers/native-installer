bin_PROGRAMS = native-backend

native_backend_SOURCES = backend.cc
native_backend_CXXFLAGS = -std=c++11

backenddir = $(sysconfdir)/package-manager/backend

install-exec-hook:
	$(LN_S) $(DESTDIR)$(bindir)/native-backend$(EXEEXT) $(DESTDIR)$(backenddir)/rpm
