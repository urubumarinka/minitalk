/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maborges <maborges@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 11:46:27 by maborges          #+#    #+#             */
/*   Updated: 2025/04/18 11:59:51 by maborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	handler_signal(int sig)
{
	static int				bit_count = 0;
	static unsigned char	c = 0;

	if (sig == SIGUSR2)
	{
		c |= (1 << (7 - bit_count)); // Set the bit at position (7 - bit_count)
	}
	// if SIGUSR1, do nothing, bit stays 0
	bit_count++;

	if (bit_count == 8) {
		ft_putchar_fd(c, 1);  // print the full character
		bit_count = 0;
		c = 0;
	}
}

int	main(void)
{
	pid_t				pid;
	struct sigaction	sa;

	pid = getpid();
	printf("Server PID: %d\n", pid);
	while (1)
	{
		usleep(5000);
	}
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	sa.sa_handler = &handler_signal;
	kill(pid, SIGUSR1); //confirm signal received
	return (0);
}
