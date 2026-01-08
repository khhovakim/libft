/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perror.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 17:56:33 by khovakim          #+#    #+#             */
/*   Updated: 2026/01/08 18:32:11 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_perror.c
// Outputs an error message to stderr.
//
// This function takes a string message as input and writes it to the standard error output (stderr).
// It is typically used to report errors or warnings in a program.
//
// Part of the Libft library.

#include <errno.h>	// for errno
#include <unistd.h> // for write, ssize_t

#include "libft/string/color.h"	 // for color codes
#include "libft/string/string.h" // for ft_strlen

char *strerror(int errnum);

void ft_perror(const char *message)
{
	if (message)
	{
		write(STDERR_FILENO, BOLD_RED, ft_strlen(BOLD_RED));
		write(STDERR_FILENO, message, ft_strlen(message));
		write(STDERR_FILENO, RESET, ft_strlen(RESET));
		write(STDERR_FILENO, "\n", 1);
	}

	if (errno != 0)
	{
		const char *error_message = strerror(errno);
		if (error_message)
		{
			write(STDERR_FILENO, BOLD_WHITE, ft_strlen(BOLD_WHITE));
			write(STDERR_FILENO, error_message, ft_strlen(error_message));
			write(STDERR_FILENO, RESET, ft_strlen(RESET));
			write(STDERR_FILENO, "\n", 1);
		}
	}
}
