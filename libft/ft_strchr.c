/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayucak <ayucak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 15:47:26 by ayucak            #+#    #+#             */
/*   Updated: 2023/07/22 18:30:50 by ayucak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	s_len;

	s_len = ft_strlen(s);
	while (s_len >= 0)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
		s_len--;
	}
	return (NULL);
}

//s stringinin içinde c yi bulup geri kalan stringi return eder

/*#include <stdio.h>
int main()
{
	const char s[] = "but i can see us lost in the memory, august slipped away into a moment in time, cause it was never mine";
	printf("%s", ft_strchr(s, ','));
}*/
