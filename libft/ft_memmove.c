/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayucak <ayucak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 15:30:31 by ayucak            #+#    #+#             */
/*   Updated: 2023/07/22 20:38:41 by ayucak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (!dst && !src)
		return (NULL);
	if (dst < src)
		ft_memcpy(dst, src, n);
	else if (dst > src)
	{
		while (n--)
			*((unsigned char *)(dst + n)) = *((unsigned char *)(src + n));
	}
	return (dst);
}

//memcpy ile aynı işi yapar ancak memmove "overlap"(üst üste binme) durumuna karşı önlem alır

/*#include <stdio.h>
int main()
{
	char str[] = "aybuke";
	ft_memmove(str + 2, str, 5);
	printf("%s", str);
}*/
