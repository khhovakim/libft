#ifndef __Ft_String__
#define __Ft_String__

#include <stddef.h> // for size_t

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

	/**
	 * @brief Calculates the length of a string.
	 *
	 * This function computes the length of the given string, excluding the null terminator.
	 *
	 * @param s The string whose length is to be calculated.
	 * @return The length of the string.
	 */
	extern size_t ft_strlen(const char *s);

	/**
	 * @brief Locates the last occurrence of a character in a string.
	 *
	 * This function searches for the last occurrence of the character `c` in the string `s`.
	 *
	 * @param s The string to be searched.
	 * @param c The character to locate (passed as an int, but treated as unsigned char).
	 * @return A pointer to the last occurrence of the character in the string, or NULL if not found.
	 */
	extern char *ft_strrchr(const char *s, int c);

	/**
	 * @brief Locates the first occurrence of a character in a string.
	 *
	 * This function searches for the first occurrence of the character `c` in the string `s`.
	 *
	 * @param s The string to be searched.
	 * @param c The character to locate (passed as an int, but treated as unsigned char).
	 * @return A pointer to the first occurrence of the character in the string, or NULL if not found.
	 */
	extern char *ft_strchr(const char *s, int c);

	/**
	 * @brief Compares two strings up to a specified number of characters.
	 *
	 * This function compares the first `n` characters of the strings `s1` and `s2`.
	 *
	 * @param s1 The first string to compare.
	 * @param s2 The second string to compare.
	 * @param n The maximum number of characters to compare.
	 * @return An integer less than, equal to, or greater than zero if `s1` is found,
	 * respectively, to be less than, to match, or be greater than `s2`.
	 */
	extern int ft_strncmp(const char *s1, const char *s2, size_t n);

	/**
	 * @brief Compares two strings.
	 *
	 * This function compares the strings `s1` and `s2` until a null terminator
	 * is found in either string, returning the difference between the first
	 * differing characters.
	 *
	 * @param s1 The first string to compare.
	 * @param s2 The second string to compare.
	 * @return An integer less than, equal to, or greater than zero if `s1` is found,
	 * respectively, to be less than, to match, or be greater than `s2`.
	 */
	extern int ft_strcmp(const char *s1, const char *s2);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // __Ft_String__
