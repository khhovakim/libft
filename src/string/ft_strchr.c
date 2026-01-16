/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 15:19:58 by khovakim          #+#    #+#             */
/*   Updated: 2026/01/16 14:44:29 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_strchr
// Locate the first occurrence of a character in a string
// Returns a pointer to the character in the string, or NULL if not found
//
// Part of the libft library

#include <stddef.h>	 // for NULL

char* ft_strchr(const char* s, int c) {
	unsigned char* us = (unsigned char*)s;
	if (us == NULL) return NULL;

	unsigned char uc = (unsigned char)c;
	while (*us && *us != uc) {
		++us;
	}

	return (*us == uc) ? (char*)us : NULL;
}
