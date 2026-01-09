/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 15:51:39 by khovakim          #+#    #+#             */
/*   Updated: 2026/01/09 18:34:50 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_putstr_fd
// This function writes a string to a file descriptor.
// If the string is NULL, it does nothing.
//
// Part of the Libft library.

#include <stddef.h> // for NULL

#include "libft/ftio/ftio.h" // for ft_putstr_fd

void ft_putstr_fd(const char *s, int fd)
{
	if (s == NULL)
		return;

	while (*s)
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
}
