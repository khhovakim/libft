/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:20:39 by khovakim          #+#    #+#             */
/*   Updated: 2026/01/16 14:42:42 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_isalpha
// Checks for alphabetic characters: 'A' to 'Z' and 'a' to 'z'.
// Returns non-zero if c is an alphabetic character, zero otherwise.
//
// Part of libft, a custom C standard library implementation.

int ft_isalpha(int c) {
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
