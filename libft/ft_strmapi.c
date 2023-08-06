/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayucak <ayucak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 16:09:00 by ayucak            #+#    #+#             */
/*   Updated: 2023/07/25 00:41:40 by ayucak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
char	fonksiyon(unsigned int i, char s)
{
	if (i % 2 == 0)
		return (s - 32);
	else
		return (s);
}
*/

//‘f’ fonksiyonu stringin her karakterine uygulanır, return yapar

/*#include <stdio.h>
int main()
{
	char *a = "foraybukeucak";
	printf("%s", ft_strmapi(a, &fonksiyon));
}*/
