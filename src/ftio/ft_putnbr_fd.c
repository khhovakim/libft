/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 16:25:10 by khovakim          #+#    #+#             */
/*   Updated: 2026/01/09 18:34:41 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_putnbr_fd
// Outputs an integer 'n' to the given file descriptor 'fd' with decimal representation.
//
// Part of the Libft library.

#include <limits.h> // for INT_MIN

#include "libft/ftio/ftio.h" // for ft_putchar_fd, ft_putstr_fd

static const char *const min_int_str = "-2147483648";

void ft_putnbr_fd(int n, int fd)
{
	if (n == INT_MIN)
	{
		ft_putstr_fd(min_int_str, fd);
		return;
	}

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}

	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
	{
		ft_putchar_fd(n + '0', fd);
	}
}
