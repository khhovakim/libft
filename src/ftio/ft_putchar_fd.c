/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 15:35:34 by khovakim          #+#    #+#             */
/*   Updated: 2026/01/08 18:32:03 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_putchar_fd.c
// Outputs the character 'c' to the given file descriptor 'fd'.
// If the file descriptor is invalid, the function puts in stderr error message.
//
// Part of the Libft library.

#include <unistd.h> // for write, ssize_t

#include "libft/ftio/ftio.h" // for ft_perror

void ft_putchar_fd(char c, int fd)
{
	ssize_t bytes_written;

	bytes_written = write(fd, &c, 1);
	if (bytes_written == -1)
	{
		ft_perror("ft_putchar_fd: write error");
	}
}
