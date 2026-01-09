<details open>

  <summary><h2>Utility functions</h2></summary>

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

  <summary><h2>String functions</h2></summary>

  Name | Prototype | Description
  --|--|--
  [strlen](./src/str/ft_strlen.c)   | `size_t  ft_strlen(const char *s);`                                  | _calculate the length of a string_
  <!--
  [strlcpy](./src/str/zen_strlcpy.c) | `size_t  zen_strlcpy(char *dst, const char *src, size_t size);`       | _size-bounded string copying_
  [strlcat](./src/str/zen_strlcat.c) | `size_t  zen_strlcat(char *dst, const char *src, size_t size);`       | _size-bounded string concatenation_
  [strchr](./src/str/zen_strchr.c)   | `char  *zen_strchr(const char *s, int c)`                             | _locate a character in a string (1st occurrence)_
  [strrchr](./src/str/zen_strrchr.c) | `char  *zen_strrchr(const char *s, int c)`                            | _locate a character in a string (last occurrence)_
  [strstr](./src/str/zen_strstr.c)   | `char  *zen_strstr(const char *big, const char *little)`              | _locate a substring in a string_
  [strnstr](./src/str/zen_strnstr.c) | `char  *zen_strnstr(const char *big, const char *little, size_t len)` | _locate a substring in a string  with length limit_
  [strcmp](./src/str/zen_strcmp.c)   | `int  zen_strcmp(const char *s1, const char *s2)`                     | _compare two strings_
  [strncmp](./src/str/zen_strncmp.c) | `int  zen_strncmp(const char *s1, const char *s2, size_t n)`          | _compare two strings up to n characters_
  -->

</details>

<details open>

  <summary><h2>Memory functions</h2></summary>

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

  <!--
  [strdup](./ft_strdup.c)   | `char *ft_strdup(const char *s);` | _duplicate a string_
  [memset](./ft_memset.c)   | `void  *ft_memset(void *s, int c, size_t n);` | _fill memory with a constant byte_
  [memcpy](./ft_memcpy.c)   | `void  *ft_memcpy(void *dest, const void *src, size_t n);` | _copy memory area (can only copy in forward direction)_
  [memmove](./ft_memmove.c) | `void  *ft_memmove(void *dest, const void *src, size_t n);` | _copy memory area (can copy in both forward and backward direction)_
  [memchr](./ft_memchr.c)   | `void  *ft_memchr(const void *s, int c, size_t n)` | _scan memory for a character_
  [calloc](./ft_calloc.c)   | `void  *ft_calloc(size_t nmemb, size_t size);` | _allocate dynamic memory: the memory is set to zero_
  [bzero](./ft_bzero.c)     | `void  ft_bzero(void *s, size_t n);` | _write zero-valued bytes_
  [atoi](./ft_atoi.c) | `int  ft_atoi(const char *nptr)` | _convert a string to an integer_
  -->
