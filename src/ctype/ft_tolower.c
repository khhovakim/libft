/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 14:10:11 by khovakim          #+#    #+#             */
/*   Updated: 2025/12/27 17:27:48 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_tolower.c
// Converts an uppercase letter to its lowercase equivalent.
// If the character is not an uppercase letter, it is returned unchanged.
//
// Part of libft, a custom C standard library implementation.

// 'A' -> 65
// 'Z' -> 90
// 'a' -> 97
// 'z' -> 122

#include "ft_ctype.h"  // for ft_isupper

int	ft_tolower(int n)
{
	return ( ft_isupper(n) ? n + ('a' - 'A') : n );
}
