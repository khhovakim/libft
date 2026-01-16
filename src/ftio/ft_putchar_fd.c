/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 15:35:34 by khovakim          #+#    #+#             */
/*   Updated: 2026/01/16 14:43:44 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_putchar_fd
// Outputs the character 'c' to the given file descriptor 'fd'.
// If the file descriptor is invalid, the function puts in stderr error message.
//
// Part of the Libft library.

#include <unistd.h>	 // for write

#include "libft/ftio/ftio.h"  // for ft_perror

void ft_putchar_fd(char c, int fd) {
	if (-1 == write(fd, &c, 1)) {
		ft_perror("ft_putchar_fd: write error");
	}
}
