/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 18:54:56 by khovakim          #+#    #+#             */
/*   Updated: 2026/01/09 18:35:02 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_putchar
// Outputs a character 'c' to the standard output.
//
// Part of libft Library

#include <unistd.h> // for STDOUT_FILENO

#include "libft/ftio/ftio.h" // for ft_putchar_fd

void ft_putchar(char c)
{
	ft_putchar_fd(c, STDOUT_FILENO);
}
