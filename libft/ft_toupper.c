/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayucak <ayucak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 17:51:24 by ayucak            #+#    #+#             */
/*   Updated: 2023/07/25 00:42:07 by ayucak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

//küçük harfleri büyük harfe çevirir

/*#include <stdio.h>
int	main(void)
{
	printf("%d", ft_toupper('a'));
}*/
