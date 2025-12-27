/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 17:17:18 by khovakim          #+#    #+#             */
/*   Updated: 2025/12/27 17:17:33 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_islower.c
// Checks for lowercase alphabetic characters (a-z).
// Returns non-zero if c is a lowercase letter, zero otherwise.
//
// Part of libft, a custom C standard library implementation.

int	ft_islower(int c)
{
	return ( c >= 'a' && c <= 'z' );
}
