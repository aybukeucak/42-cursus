/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayucak <ayucak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 18:03:50 by ayucak            #+#    #+#             */
/*   Updated: 2023/07/25 00:11:56 by ayucak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}

//fd ile gönderilen dosyaya string yazdırır

/*#include <fcntl.h>
int main()
{
	int fd = open("putstr.txt", O_CREAT | O_RDWR, 0777);
	ft_putstr_fd("aybuke", fd);
}*/
