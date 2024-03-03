/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayucak <ayucak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:37:26 by ayucak            #+#    #+#             */
/*   Updated: 2023/12/03 16:24:59 by ayucak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_handle(int sig)
{
	static int	bit = 128;
	static int	c = 0;

	if (sig == SIGUSR1)
		c = c + bit;
	bit = bit / 2;
	if (bit == 0)
	{
		write(1, &c, 1);
		bit = 128;
		c = 0;
	}
}

int	main(void)
{
	write(1, "\n\033[33mServer_Bonus PID : \033[0m", 30);
	ft_putnbr(getpid());
	write(1, "\n", 2);
	signal(SIGUSR1, ft_handle);
	signal(SIGUSR2, ft_handle);
	while (1)
		pause();
}
