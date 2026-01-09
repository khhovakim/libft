/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 18:32:51 by khovakim          #+#    #+#             */
/*   Updated: 2026/01/09 18:34:36 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_putnbr
// Outputs an integer 'n' to the standard output with decimal representation.
//
// Part of the Libft library.

#include <unistd.h> // for STDOUT_FILENO

#include "libft/ftio/ftio.h" // for ft_putnbr_fd

void ft_putnbr(int n)
{
	ft_putnbr_fd(n, STDOUT_FILENO);
}
