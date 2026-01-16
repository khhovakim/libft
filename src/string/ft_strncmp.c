/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 16:02:52 by khovakim          #+#    #+#             */
/*   Updated: 2026/01/16 14:44:54 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_strncmp
// Custom implementation of strncmp
// Compares up to n characters of two strings.
//
// This function compares the characters of two strings up to a specified
// length, returning the difference between the first differing characters.
//
// Part of the Libft library.

#include <stddef.h>	 // for NULL

int ft_strncmp(const char* s1, const char* s2, size_t n) {
	if (s1 == NULL && s2 == NULL) return 0;

	unsigned char* ustr1 = (unsigned char*)s1;
	if (s2 == NULL) return (int)(*ustr1);

	unsigned char* ustr2 = (unsigned char*)s2;
	if (s1 == NULL) return -(int)(*ustr2);

	while (n && *ustr1 && *ustr2 && *ustr1 == *ustr2) {
		++ustr1;
		++ustr2;
		--n;
	}

	return (n) ? (int)(*ustr1 - *ustr2) : 0;
}
