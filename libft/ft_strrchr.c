/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayucak <ayucak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 16:33:07 by ayucak            #+#    #+#             */
/*   Updated: 2023/07/22 20:40:24 by ayucak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (0);
}

//strchr'nin c'yi string'in tersinden bulan hali

/*#include <stdio.h>
int main()
{
	const char s[] = "but i can see us lost in the memory, august slipped away into a moment in time, cause it was never mine";
	printf("%s", ft_strrchr(s, ','));
}*/
