/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayucak <ayucak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 15:25:16 by ayucak            #+#    #+#             */
/*   Updated: 2023/07/22 15:25:30 by ayucak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

//ascii karakter kümesine uyup uymadığını kontrol eder

/*#include <stdio.h>
int main()
{
	printf("%d", ft_isascii('z'));
}*/
