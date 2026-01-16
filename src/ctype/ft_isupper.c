/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 17:15:50 by khovakim          #+#    #+#             */
/*   Updated: 2026/01/16 14:43:00 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_isupper
// Checks for uppercase alphabetic characters (A-Z).
// Returns non-zero if c is an uppercase letter, zero otherwise.
//
// Part of libft, a custom C standard library implementation.

int ft_isupper(int c) {
	return (c >= 'A' && c <= 'Z');
}
