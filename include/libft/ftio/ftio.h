#ifndef __Ft_IO__
#define __Ft_IO__

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

	/**
	 * @brief Prints an error message to the standard error output (stderr).
	 *
	 * This function writes the specified error message to the standard error output.
	 *
	 * @param message The error message to print.
	 */
	extern void ft_perror(const char *message);

	/**
	 * @brief Outputs the character 'c' to the given file descriptor 'fd'.
	 *
	 * This function writes the character 'c' to the specified file descriptor 'fd'.
	 * If the file descriptor is invalid, an error message is printed to stderr.
	 *
	 * @param c The character to output.
	 * @param fd The file descriptor to write to.
	 */
	extern void ft_putchar_fd(char c, int fd);

	/**
	 * @brief Writes a string to a file descriptor.
	 *
	 * This function outputs the string 's' to the specified file descriptor 'fd'.
	 *
	 * @param s The string to write.
	 * @param fd The file descriptor to write to.
	 */
	extern void ft_putstr_fd(const char *s, int fd);

	/**
	 * @brief Writes a string followed by a newline to a file descriptor.
	 *
	 * This function outputs the string 's' followed by a newline character to the specified file descriptor 'fd'.
	 *
	 * @param s The string to write.
	 * @param fd The file descriptor to write to.
	 */
	extern void ft_putendl_fd(const char *s, int fd);

	/**
	 * @brief Outputs an integer 'n' to the given file descriptor 'fd'.
	 *
	 * This function converts the integer 'n' to its string representation and writes it to the specified file descriptor 'fd'.
	 *
	 * @param n The integer to output.
	 * @param fd The file descriptor to write to.
	 */
	extern void ft_putnbr_fd(int n, int fd);

	/**
	 * @brief Outputs an integer 'n' to the standard output.
	 *
	 * This function writes the integer 'n' to the standard output (stdout) with decimal representation.
	 *
	 * @param n The integer to output.
	 */
	extern void ft_putnbr(int n);

	/**
	 * @brief Outputs the character 'c' to the standard output.
	 *
	 * This function writes the character 'c' to the standard output (stdout).
	 *
	 * @param c The character to output.
	 */
	extern void ft_putchar(char c);

	/**
	 * @brief Outputs a string 's' to the standard output.
	 *
	 * This function writes the string 's' to the standard output (stdout).
	 *
	 * @param s The string to output.
	 */
	extern void ft_putstr(const char *s);

	/**
	 * @brief Outputs a string 's' followed by a newline to the standard output.
	 *
	 * This function writes the string 's' followed by a newline character to the standard output (stdout).
	 *
	 * @param s The string to output.
	 */
	extern void ft_puts(const char *s);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // __Ft_IO__
