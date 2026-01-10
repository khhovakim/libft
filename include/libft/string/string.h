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

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // __Ft_String__
