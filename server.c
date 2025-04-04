/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maborges <maborges@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 11:46:27 by maborges          #+#    #+#             */
/*   Updated: 2025/03/26 14:31:03 by maborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	main(void)
{
	pid_t	pid;

	pid = getpid();
	printf("Server PID: %d\n", pid);
	struct sigaction	act;

	while(1)
	{
		usleep(500);
	}
	//if signal is SIGUSR1, print 0
	//if signal is SIGUSR2, print 1
	//if signal is SIGUSR1 and SIGUSR2, print newline

	//get message from client
	//decode message received from binary to string
	//print message
	return (0);
}
