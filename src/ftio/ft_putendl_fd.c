/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 16:09:42 by khovakim          #+#    #+#             */
/*   Updated: 2026/01/09 18:34:59 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_putendl_fd
// This function writes a string followed by a newline to a file descriptor.
// If the string is NULL, it does nothing.
//
// Part of the Libft library.

#include "libft/ftio/ftio.h" // for ft_putstr_fd

void ft_putendl_fd(const char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
