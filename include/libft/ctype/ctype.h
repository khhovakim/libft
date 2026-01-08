#ifndef __Ft_Ctype__
#define __Ft_Ctype__

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

	/**
	 * @brief Checks whether the given integer value corresponds to an ASCII character.
	 *
	 * This function determines if the provided integer falls within the range of
	 * standard 7-bit ASCII characters (0x00 to 0x7F).
	 *
	 * @param  c The integer value to check.
	 * @return 1 if c is an ASCII character, 0 otherwise.
	 */
	extern int ft_isascii(int c);

	/**
	 * @brief Checks whether the given integer value is an alphanumeric character.
	 *
	 * This function returns 1 if the input is an ASCII letter or digit (A-Z, a-z, 0-9), 0 otherwise.
	 *
	 * @param  c The integer value to check.
	 * @return 1 if c is alphanumeric, 0 otherwise.
	 */
	extern int ft_isalnum(int c);

	/**
	 * @brief Checks whether the given integer value is an alphabetic character.
	 *
	 * This function returns 1 if the input is an ASCII letter (A-Z, a-z), 0 otherwise.
	 *
	 * @param  c The integer value to check.
	 * @return 1 if c is alphabetic, 0 otherwise.
	 */
	extern int ft_isalpha(int c);

	/**
	 * @brief Checks whether the given integer value is a decimal digit.
	 *
	 * This function returns 1 if the input is an ASCII digit (0-9), 0 otherwise.
	 *
	 * @param  c The integer value to check.
	 * @return 1 if c is a digit, 0 otherwise.
	 */
	extern int ft_isdigit(int c);

	/**
	 * @brief Checks whether the given integer value is a printable ASCII character.
	 *
	 * This function returns 1 if the input is a printable ASCII character (including space), 0 otherwise.
	 *
	 * @param  c The integer value to check.
	 * @return 1 if c is printable, 0 otherwise.
	 */
	extern int ft_isprint(int c);

	/**
	 * @brief Checks whether the given integer value is a whitespace character.
	 *
	 * This function returns 1 if the input is a whitespace character (space, tab, newline, vertical tab, form feed, carriage return), 0 otherwise.
	 *
	 * @param  c The integer value to check.
	 * @return 1 if c is a whitespace character, 0 otherwise.
	 */
	extern int ft_isspace(int c);

	/**
	 * @brief Converts a lowercase ASCII letter to its uppercase equivalent.
	 *
	 * If the input character is a lowercase letter (a-z), it is converted to uppercase (A-Z).
	 * If the input is not a lowercase letter, it is returned unchanged.
	 *
	 * @param  c The integer value representing the character to convert.
	 * @return The uppercase equivalent if c is lowercase, otherwise returns c unchanged.
	 */
	extern int ft_toupper(int c);

	/**
	 * @brief Converts an uppercase ASCII letter to its lowercase equivalent.
	 *
	 * If the input character is an uppercase letter (A-Z), it is converted to lowercase (a-z).
	 * If the input is not an uppercase letter, it is returned unchanged.
	 *
	 * @param  c The integer value representing the character to convert.
	 * @return The lowercase equivalent if c is uppercase, otherwise returns c unchanged.
	 */
	extern int ft_tolower(int c);

	/**
	 * @brief Checks whether the given integer value is a lowercase ASCII letter.
	 *
	 * This function returns 1 if the input is a lowercase letter (a-z), 0 otherwise.
	 *
	 * @param  c The integer value to check.
	 * @return 1 if c is lowercase, 0 otherwise.
	 */
	extern int ft_islower(int c);

	/**
	 * @brief Checks whether the given integer value is an uppercase ASCII letter.
	 *
	 * This function returns 1 if the input is an uppercase letter (A-Z), 0 otherwise.
	 *
	 * @param  c The integer value to check.
	 * @return 1 if c is uppercase, 0 otherwise.
	 */
	extern int ft_isupper(int c);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // __Ft_Ctype__
