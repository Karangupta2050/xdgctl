CC = clang
CFLAGS = $(shell pkg-config --cflags gio-2.0 gio-unix-2.0)
LIBS = $(shell pkg-config --libs gio-2.0 gio-unix-2.0)
PREFIX = /usr/local

xdgctl: main.c
	$(CC) $(CFLAGS) -o xdgctl main.c $(LIBS)

format:
	clang-format -i main.c mimetypes.h

clean:
	rm -f xdgctl

install:
	install -Dm755 xdgctl $(PREFIX)/bin/xdgctl

.PHONY: xdgctl format clean install
