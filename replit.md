# libft - C Standard Library Implementation

## Overview
This is a C library project implementing common C standard library functions. It includes character type checking (ctype), I/O operations, and string manipulation functions.

## Project Structure
```
.
├── include/libft/     # Header files
│   ├── libft.h        # Main header
│   ├── ctype/         # Character type headers
│   ├── ftio/          # I/O function headers
│   └── string/        # String function headers
├── src/               # Source files
│   ├── ctype/         # Character type functions (isalpha, isdigit, etc.)
│   ├── ftio/          # I/O functions (putchar, putstr, etc.)
│   └── string/        # String functions (strlen, strcmp, etc.)
├── unit_tests/        # Test suite
├── Makefile           # Build configuration
└── ft_*.c             # Root-level source files
```

## Build Commands
- `make` - Build the library (creates `lib/release/libft.a`)
- `make test` - Build and run unit tests
- `make re` - Clean and rebuild
- `make clean` - Remove object files
- `make fclean` - Remove object files and library

## Build Types
- `make BUILD_TYPE=r` - Release build (default, optimized)
- `make BUILD_TYPE=d` - Debug build
- `make BUILD_TYPE=as` - AddressSanitizer build

## Workflow
The "Build Library" workflow runs `make re && make test` to rebuild the library and run all tests.

## Dependencies
- C compiler (gcc/clang)
- GNU Make
