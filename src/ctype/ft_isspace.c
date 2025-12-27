/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 17:10:06 by khovakim          #+#    #+#             */
/*   Updated: 2025/12/27 17:14:18 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_isspace.c
// Checks for whitespace characters:
// space, tab, newline, vertical tab, form feed, carriage return.
// Returns non-zero if c is a whitespace character, zero otherwise.
//
// Part of libft, a custom C standard library implementation.

// ' '  -> 32
// '\t' -> 9
// '\n' -> 10
// '\v' -> 11
// '\f' -> 12
// '\r' -> 13

int	ft_isspace(int c)
{
	return ( c == ' ' || ( (unsigned)c - '\t' < 5) );
}
