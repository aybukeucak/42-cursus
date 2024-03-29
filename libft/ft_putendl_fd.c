/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayucak <ayucak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 18:01:10 by ayucak            #+#    #+#             */
/*   Updated: 2023/07/22 20:38:52 by ayucak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	if (s)
		while (*s != '\0')
			ft_putchar_fd(*s++, fd);
	ft_putchar_fd('\n', fd);
}

//fd ile gönderilen dosyaya string yazdırır ve sonuna \n atar

/*#include <fcntl.h>
int main()
{
	int fd = open("putendl.txt", O_CREAT | O_RDWR, 0777);
	ft_putendl_fd("aybuke", fd);
	ft_putendl_fd("ucak", fd);
}*/
