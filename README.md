# simplelib

This is a simple AutoTools library, used for demonstration. It fills a buffer with a precompiled string.

## Usage

```h
// Return the length of the stored greeting.
size_t greeting_len(void);

// Fill the buffer with a friendly greeting, up to len characters.
void obtain_greeting(char *buf, size_t len);
```

## Build

To regenerate the `.in` and `.m4` files from the `.ac` files (etc), run `autoreconf --install` (or `-i`).

Use `make distcheck` to build `simplelib-$VERSION.tar.gz`.

## Notes

- `libtool` is probably worth the effort.
- Needed `AM_PROG_AR` before `LT_INIT`.
- `AC_CONFIG_MACRO_DIRS([m4])` in `configure.ac` and `ACLOCAL_AMFLAGS = "-Im4"` in `Makefile.am` was suggested by`autoreconf` to run without warnings.
