/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayucak <ayucak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:37:44 by ayucak            #+#    #+#             */
/*   Updated: 2023/12/03 16:05:56 by ayucak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_sendbit(int pid, char c)
{
	int	bit;

	bit = 7;
	while (bit >= 0)
	{
		if (c >> bit & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(100);
		bit--;
	}
}

int	ft_unicode(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 0)
			return (1);
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	pid;
	int	i;

	i = 0;
	if (ac == 3)
	{
		pid = ft_atoi(av[1]);
		if (ft_unicode(av[2]))
		{
			write (1, "\033[31mNO UNICODE\n", 17);
			return (0);
		}
		while (av[2][i])
		{
			ft_sendbit(pid, (av[2][i]));
			i++;
		}
		ft_sendbit(pid, '\n');
	}
	else
	{
		write(1, "\033[31mCLIENT format error: invalid arguments\n", 45);
		write(1, "\033[32mCorrect format: client, pid, string\n", 42);
	}
	return (0);
}
