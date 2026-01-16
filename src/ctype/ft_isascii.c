/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:45:43 by khovakim          #+#    #+#             */
/*   Updated: 2026/01/16 14:42:46 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_isascii
// Checks whether c is a 7-bit unsigned char that fits into the ASCII character
// set. Returns non-zero if c is an ASCII character, zero otherwise.
//
// Part of libft, a custom C standard library implementation.

// ASCIIs range:
// first character: NUL (0)
// last character:  DEL (127)

int ft_isascii(int c) {
	return (c >= 0 && c <= 127);
}
