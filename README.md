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
└── Makefile           # Build configuration
```

## Build Commands
- `make` - Build the library (creates `lib/release/libft.a`)
- `make CC=clang` - Build using a specific compiler (e.g., clang)
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
- C compiler (gcc/clang/cc)
- GNU Make

## Function Reference

<details open>

  <summary><h3>Ft_Ctype</h3></summary>

  Name | Prototype | Description
  --|--|--
  [isalpha](./src/ctype/ft_isalpha.c) | `int  ft_isalpha(int c);` | _check for alphabetic characters_
  [isdigit](./src/ctype/ft_isdigit.c) | `int  ft_isdigit(int c);` | _check for digit (`0` through `9`)_
  [isalnum](./src/ctype/ft_isalnum.c) | `int  ft_isalnum(int c);` | _check for alphanumeric characters_
  [isspace](./src/ctype/ft_isspace.c) | `int  ft_isspace(int c);` | _check for whitespace characters_
  [isascii](./src/ctype/ft_isascii.c) | `int  ft_isascii(int c);` | _check whether `c` is a 7-bit `unsigned char` that fits into the ASCII character set_
  [isprint](./src/ctype/ft_isprint.c) | `int  ft_isprint(int c);` | _check for any printable character (including `SPACE`)_
  [isupper](./src/ctype/ft_isupper.c) | `int  ft_isupper(int c);` | _checks for uppercase alphabetic characters (A-Z)_
  [islower](./src/ctype/ft_islower.c) | `int  ft_islower(int c);` | _checks for lowercase alphabetic characters (a-z)_
  [toupper](./src/ctype/ft_toupper.c) | `int  ft_toupper(int c);` | _convert a lowercase letter to uppercase_
  [tolower](./src/ctype/ft_tolower.c) | `int  ft_tolower(int c);` | _convert an uppercase letter to lowercase_

</details>

<details open>

  <summary><h3>Ft_String</h3></summary>

  Name | Prototype | Description
  --|--|--
  [strlen](./src/string/ft_strlen.c)     | `size_t  ft_strlen(const char *s);` | _calculate the length of a string_
  [strchr](./src/string/ft_strchr.c)     | `char  *ft_strchr(const char *s, int c);` | _locate character in string_
  [strrchr](./src/string/ft_strrchr.c)   | `char  *ft_strrchr(const char *s, int c);` | _locate character in string from end_
  [strcmp](./src/string/ft_strcmp.c)     | `int  ft_strcmp(const char *s1, const char *s2);` | _compare two strings_
  [strncmp](./src/string/ft_strncmp.c)   | `int  ft_strncmp(const char *s1, const char *s2, size_t n);` | _compare two strings with length limit_
  [strdup](./ft_strdup.c)               | `char *ft_strdup(const char *s);` | _duplicate a string_
  [strjoin](./ft_strjoin.c)             | `char *ft_strjoin(char const *s1, char const *s2);` | _concatenate two strings_
  [strtrim](./ft_strtrim.c)             | `char *ft_strtrim(char const *s1, char const *set);` | _trim characters from beginning and end_
  [split](./ft_split.c)                 | `char **ft_split(char const *s, char c);` | _split string into array using delimiter_
  [substr](./ft_substr.c)               | `char *ft_substr(char const *s, unsigned int start, size_t len);` | _extract substring from string_
  [strmapi](./ft_strmapi.c)             | `char *ft_strmapi(char const *s, char (*f)(unsigned int, char));` | _apply function to each character with index_
  [striteri](./ft_striteri.c)           | `void ft_striteri(char *s, void (*f)(unsigned int, char*));` | _apply function to each character with index (in-place)_
  [strlcpy](./ft_strlcpy.c)             | `size_t ft_strlcpy(char *dst, const char *src, size_t size);` | _size-bounded string copying_
  [strlcat](./ft_strlcat.c)             | `size_t ft_strlcat(char *dst, const char *src, size_t size);` | _size-bounded string concatenation_
  [strnstr](./ft_strnstr.c)             | `char *ft_strnstr(const char *big, const char *little, size_t len);` | _locate a substring in a string with length limit_

</details>

<details open>

  <summary><h3>Ft_IO</h3></summary>

  Name | Prototype | Description
  --|--|--
  [perror](./src/ftio/ft_perror.c)          | `void  ft_perror(const char *msg);`             | _outputs an error message to stderr_
  [putchar](./src/ftio/ft_putchar.c)        | `void  ft_putchar(char ch);`                    | _outputs a character 'c' to the standard output_
  [putchar_fd](./src/ftio/ft_putchar_fd.c)  | `void  ft_putchar_fd(char ch, int fd);`         | _outputs a character 'c' to the given file descriptor 'fd'_
  [putstr](./src/ftio/ft_putstr.c)          | `void  ft_putstr(const char *str);`             | _outputs a string 'str' to the standard output_
  [putstr_fd](./src/ftio/ft_putstr_fd.c)    | `void  ft_putstr_fd(const char *str, int fd);`  | _outputs a string 'str' to the given file descriptor 'fd'_
  [puts](./src/ftio/ft_puts.c)              | `void  ft_puts(const char *str);`               | _outputs a string 'str' to the standard output with new line_
  [putendl_fd](./src/ftio/ft_putstr_fd.c)   | `void  ft_putendl_fd(const char *str, int fd);` | _outputs a string 'str' to the given file descriptor 'fd' with new line_
  [putnbr](./src/ftio/ft_putnbr.c)          | `void  ft_putnbr(int nbr);`                     | _outputs an integer 'nbr' to the standard output with decimal representation_
  [putnbr_fd](./src/ftio/ft_putnbr_fd.c)    | `void  ft_putnbr_fd(int nbr, int fd);`          | _outputs an integer 'nbr' to the given file descriptor 'fd' with decimal representation_

</details>
