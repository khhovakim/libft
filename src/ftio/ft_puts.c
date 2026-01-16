/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puts.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 18:57:59 by khovakim          #+#    #+#             */
/*   Updated: 2026/01/16 14:44:04 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_puts
// Outputs a string 's' followed by a newline to the standard output.
//
// Part of libft Library

#include <unistd.h>	 // for STDOUT_FILENO

#include "libft/ftio/ftio.h"  // for ft_putendl_fd

void ft_puts(const char* s) {
	ft_putendl_fd(s, STDOUT_FILENO);
}
