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

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // __Ft_String__
