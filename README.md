# libft - C Standard Library Implementation

## Overview
This is a C library project implementing common C standard library functions. It includes character type checking (ctype), I/O operations, string manipulation, memory management, and list handling.

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
  <summary><h3>Ft_Memory</h3></summary>

  Name | Prototype | Description
  --|--|--
  [memset](./ft_memset.c)   | `void *ft_memset(void *s, int c, size_t n);` | _fill memory with a constant byte_
  [bzero](./ft_bzero.c)     | `void ft_bzero(void *s, size_t n);` | _write zero-valued bytes_
  [memcpy](./ft_memcpy.c)   | `void *ft_memcpy(void *dest, const void *src, size_t n);` | _copy memory area_
  [memmove](./ft_memmove.c) | `void *ft_memmove(void *dest, const void *src, size_t n);` | _copy memory area (handles overlaps)_
  [memchr](./ft_memchr.c)   | `void *ft_memchr(const void *s, int c, size_t n);` | _scan memory for a character_
  [memcmp](./ft_memcmp.c)   | `int ft_memcmp(const void *s1, const void *s2, size_t n);` | _compare memory areas_
  [calloc](./ft_calloc.c)   | `void *ft_calloc(size_t nmemb, size_t size);` | _allocate dynamic memory and zero it_
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

<details open>
  <summary><h3>Ft_Numbers & Conversion</h3></summary>

  Name | Prototype | Description
  --|--|--
  [atoi](./ft_atoi.c) | `int ft_atoi(const char *nptr);` | _convert string to integer_
  [itoa](./ft_itoa.c) | `char *ft_itoa(int n);` | _convert integer to string_
</details>

<details open>
  <summary><h3>Ft_Lists</h3></summary>

  Name | Prototype | Description
  --|--|--
  [lstnew](./ft_lstnew.c)         | `t_list *ft_lstnew(void *content);` | _create new list element_
  [lstadd_front](./ft_lstadd_front.c) | `void ft_lstadd_front(t_list **lst, t_list *new);` | _add element at beginning of list_
  [lstsize](./ft_lstsize.c)       | `int ft_lstsize(t_list *lst);` | _count elements in list_
  [lstlast](./ft_lstlast.c)       | `t_list *ft_lstlast(t_list *lst);` | _find last element of list_
  [lstadd_back](./ft_lstadd_back.c) | `void ft_lstadd_back(t_list **lst, t_list *new);` | _add element at end of list_
  [lstdelone](./ft_lstdelone.c)   | `void ft_lstdelone(t_list *lst, void (*del)(void*));` | _delete one element_
  [lstclear](./ft_lstclear.c)     | `void ft_lstclear(t_list **lst, void (*del)(void*));` | _delete entire list_
  [lstiter](./ft_lstiter.c)       | `void ft_lstiter(t_list *lst, void (*f)(void *));` | _apply function to all elements_
  [lstmap](./ft_lstmap.c)         | `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));` | _create new list by applying function_
</details>
