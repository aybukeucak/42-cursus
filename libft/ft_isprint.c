/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayucak <ayucak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 15:26:17 by ayucak            #+#    #+#             */
/*   Updated: 2023/07/22 20:37:56 by ayucak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

//yazdırılabilir bir karakter olup olmadığını kontrol eder

/*#include <stdio.h>
int main()
{
	printf("%d", ft_isprint('y'));
}*/
