/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 13:47:43 by khovakim          #+#    #+#             */
/*   Updated: 2026/01/16 14:43:04 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_toupper
// Converts a lowercase letter to its uppercase equivalent.
// If the character is not a lowercase letter, it is returned unchanged.
//
// Part of libft, a custom C standard library implementation.

// 'A' -> 65
// 'Z' -> 90
// 'a' -> 97
// 'z' -> 122

#include "libft/ctype/ctype.h"	// for ft_islower

int ft_toupper(int c) {
	return (ft_islower(c) ? c - ('a' - 'A') : c);
}
