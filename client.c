/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maborges <maborges@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 12:16:52 by maborges          #+#    #+#             */
/*   Updated: 2025/04/18 11:59:55 by maborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static int	g_reply = 0;

void	signal_handler(int sig)
{
	if (sig == SIGUSR1)
		g_reply = 1;
	else if (sig == SIGUSR2)
		g_reply = 0;
}

void	message_to_binary_sender(char *msg, pid_t pid)
{
	int	n;
	int	i;
	int	b;

	i = 0;
	b = 0;
	while (msg[i] != "\0")
	{
		msg[i] = n;
		while (b++ < 8)
		{
			n = (n >> (7 - b)) & 1;
			if (n == 0)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			usleep(100);
			while (g_reply == 0)
				pause();
			g_reply = 0;
		}
	}
	if (msg[i] == "\0")
	{
		b = 0;
		while (b++ < 8)
			kill(pid, SIGUSR1);
	}
}

int	main(int ac, char **ag)
{
	const char	*msg;
	int			i;
	int			pid;

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
	signal(SIGUSR1, signal_handler);
	message_to_binary_sender(msg, pid);
	return (0);
}
