/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayucak <ayucak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 15:58:54 by ayucak            #+#    #+#             */
/*   Updated: 2023/07/22 20:39:14 by ayucak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (i < ft_strlen(s))
	{
		f(i, &s[i]);
		i++;
	}
}

/*
void fonksiyon(unsigned int a, char *b)
{
	*b += 5;
}
*/

//‘f’ fonksiyonu stringin her karakterine uygulanır

/*#include <stdio.h>
int main()
{
	char s[] = "ABCDEF";
	ft_striteri(s, fonksiyon);
	printf("%s", s);
}*/
