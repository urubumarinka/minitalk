/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maborges <maborges@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 12:17:33 by maborges          #+#    #+#             */
/*   Updated: 2025/04/18 11:59:53 by maborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# define _XOPEN_SOURCE 700

# include <signal.h>
# include <stdio.h>
# include <unistd.h>
//# include <stdlib.h>
# include <sys/types.h>
# include "libft/libft.h"

void	message_to_binary_sender(char *msg, pid_t pid);
void	signal_handler(char c, pid_t pid);
#endif
