/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayucak <ayucak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 17:50:49 by ayucak            #+#    #+#             */
/*   Updated: 2023/07/22 18:32:35 by ayucak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}

//büyük harfleri küçük harfe çevirir

/*#include <stdio.h>
int	main()
{
	printf("%d", ft_tolower('A'));
}*/
