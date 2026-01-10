/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 19:18:20 by khovakim          #+#    #+#             */
/*   Updated: 2026/01/10 20:02:47 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_strlen
// Custom implementation of strlen
// Calculates the length of a string.
//
// This function iterates through the string until it finds the null terminator,
// counting the number of characters along the way.
//
// Part of the Libft library.

#include <stddef.h> // for size_t, NULL

size_t ft_strlen(const char *s)
{
	if (s == NULL)
		return 0;

	size_t len = 0;
	while (s[len])
	{
		++len;
	}

	return len;
}
