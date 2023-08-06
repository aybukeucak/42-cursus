/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayucak <ayucak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 15:08:49 by ayucak            #+#    #+#             */
/*   Updated: 2023/07/25 00:37:36 by ayucak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = malloc(count * size);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, size * count);
	return (p);
}

//ayrılan bellek bloğunun tüm baytlarını 0 değeriyle doldurur

/*#include <stdio.h>
int	main()
{
	printf("%p", ft_calloc(5, 10));
}*/
