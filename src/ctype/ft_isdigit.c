/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:01:22 by khovakim          #+#    #+#             */
/*   Updated: 2026/01/07 18:02:31 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_isdigit.c
// Checks for a digit character ('0' to '9').
// Returns non-zero if c is a digit character, zero otherwise.
//
// Part of libft,  a custom C standard library implementation.

int ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
