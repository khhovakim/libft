/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:37:18 by khovakim          #+#    #+#             */
/*   Updated: 2025/12/27 16:19:06 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_isalnum.c
// Checks for alphanumeric characters: alphabetic ('A' to 'Z' and 'a' to 'z') and digit ('0' to '9').
// Returns non-zero if c is an alphanumeric character, zero otherwise.

#include "ft_ctype.h"  // for ft_isalpha, ft_isdigit

int	ft_isalnum(int c)
{
	return ( ft_isalpha(c) || ft_isdigit(c) );
}
