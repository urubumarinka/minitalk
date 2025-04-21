/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maborges <maborges@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 12:16:52 by maborges          #+#    #+#             */
/*   Updated: 2025/04/21 20:49:50 by maborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

static int	g_reply = 0;

void	signal_handler(int sig)
{
	if (sig == SIGUSR1)
		g_reply = 1;
}

void	send_char(char c, pid_t pid)
{
	int	bit;

	bit = -1;
	while (++bit < 8)
	{
		if (((c >> (7 - bit)) & 1) == 0)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(100);
		while (g_reply == 0)
			pause();
		g_reply = 0;
	}
}

void	message_to_binary_sender(char *msg, pid_t pid)
{
	int	c;
	int	i;

	i = -1;
	while (msg[++i] != '\0')
	{
		c = msg[i];
		send_char(c, pid);
	}
	c = 0;
	send_char(c, pid);
}

int	main(int ac, char **ag)
{
	char				*msg;
	int					pid;
	struct sigaction	sa;

	if (ac != 3)
	{
		write (1, "Usage: ./client [server-pid] [message]\n", 40);
		return (1);
	}
	pid = ft_atoi(ag[1]);
	if (pid <= 0)
	{
		write(1, "Invalid PID\n", 13);
		return (1);
	}
	msg = ag[2];
	sa.sa_handler = signal_handler;
	sigemptyset(&sa.sa_mask);
	sa.sa_flags = 0;
	sigaction(SIGUSR1, &sa, NULL);
	message_to_binary_sender(msg, pid);
	return (0);
}
