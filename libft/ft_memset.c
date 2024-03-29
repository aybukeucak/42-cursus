/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayucak <ayucak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 15:39:51 by ayucak            #+#    #+#             */
/*   Updated: 2023/07/24 14:18:13 by ayucak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = c ;
		i++;
	}
	return (b);
}

//c karakterini len kadar stringin üzerine yazar

/*#include <stdio.h>
int main()
{
	char a[] = "aybuke";
	ft_memset(a, 120, 3);
	printf("%s", a);
}*/
