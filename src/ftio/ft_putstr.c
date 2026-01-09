/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 18:57:04 by khovakim          #+#    #+#             */
/*   Updated: 2026/01/09 18:34:55 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_putstr
// Outputs a string 's' to the standard output.
//
// Part of libft Library

#include <unistd.h> // for STDOUT_FILENO

#include "libft/ftio/ftio.h" // for ft_putstr_fd

void ft_putstr(const char *s)
{
	ft_putstr_fd(s, STDOUT_FILENO);
}
