/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 15:35:51 by khovakim          #+#    #+#             */
/*   Updated: 2026/01/10 20:12:51 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_strrchr
// Find the last occurrence of a character in a string
// Returns a pointer to the last occurrence of the character c in the string s
// or NULL if the character is not found.
//
// Part of the Libft library

#include <stddef.h> // for NULL

#include "libft/string/string.h" // for ft_strchr

char *ft_strrchr(const char *s, int c)
{
	unsigned char *us = (unsigned char *)s;
	if (us == NULL)
		return NULL;

	unsigned char uc = (unsigned char)c;
	unsigned char *last_occurrence = NULL;
	while (*us)
	{
		if (*us == uc)
			last_occurrence = us;

		++us;
	}

	return last_occurrence
			   ? (char *)last_occurrence
			   : NULL;
}
