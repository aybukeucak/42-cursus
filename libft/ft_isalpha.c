/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayucak <ayucak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 15:24:25 by ayucak            #+#    #+#             */
/*   Updated: 2023/07/22 15:24:41 by ayucak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (1);
	return (0);
}

//alfabetik bir karakter olup olmadığını kontrol eder.

/*#include <stdio.h>
int main()
{
	printf("%d", ft_isalpha('e'));
}*/
