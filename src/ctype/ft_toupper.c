/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 13:47:43 by khovakim          #+#    #+#             */
/*   Updated: 2025/12/27 17:27:56 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_toupper.c
// Converts a lowercase letter to its uppercase equivalent.
// If the character is not a lowercase letter, it is returned unchanged.
//
// Part of libft, a custom C standard library implementation.

// 'A' -> 65
// 'Z' -> 90
// 'a' -> 97
// 'z' -> 122

#include "ft_ctype.h"  // for ft_islower

int	ft_toupper(int n)
{
	return ( ft_islower(n) ? n - ('a' - 'A') : n );
}
