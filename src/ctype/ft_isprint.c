/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:53:21 by khovakim          #+#    #+#             */
/*   Updated: 2026/01/09 18:39:11 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_isprint
// Checks for printable characters including space (' ' to '~').
// Returns non-zero if c is a printable character, zero otherwise.
//
// Part of libft, a custom C standard library implementation.

// Printable characters range:
// first character: space (32)
// last character:  tilde (126)

int ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
