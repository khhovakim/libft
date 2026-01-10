/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 20:03:46 by khovakim          #+#    #+#             */
/*   Updated: 2026/01/10 20:06:21 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_strcmp
// Custom implementation of strcmp
// Compares two strings.
//
// This function compares the characters of two strings until a null terminator
// is found in either string, returning the difference between the first
// differing characters.
//
// Part of the Libft library.

#include "libft/string/string.h" // for ft_strlen, ft_strncmp

int ft_strcmp(const char *s1, const char *s2)
{
	return ft_strncmp(s1, s2, ft_strlen(s1) + 1);
}
