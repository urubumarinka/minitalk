/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maborges <maborges@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 12:16:52 by maborges          #+#    #+#             */
/*   Updated: 2025/03/26 18:21:38 by maborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_sender(char c, pid_t pid)
{
	int	n;
	int	i;

	n = 0;
	i = 0;
	while (i++ < 8)
	{
		n = (c >> 7 - i) & 1;
		if (n == 0)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
	}
}

int	main(int ac, char **ag)
{
	char	*msg;
	int		i;
	int		pid;

	pid = ft_atoi(ag[1]);
	if (ac != 3)
		write (1, "Usage: ./client [server-pid] [message]\n", 40);
	else if (ag[1] < 0)
		write(1, "Invalid PID\n", 13);
	else
	{
		msg = ag[2];
		i = 0;
		while (msg)
		{
			ft_sender(msg[i], pid);
			i++;
		}
	}
	return (0);
}
