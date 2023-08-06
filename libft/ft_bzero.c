/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayucak <ayucak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 15:04:42 by ayucak            #+#    #+#             */
/*   Updated: 2023/07/22 20:37:24 by ayucak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

//s işaretçisi tarafından gösterilen bellek bölgesinin ilk n baytını sıfırlar

/*#include <stdio.h>
int main()
{
	char s[] = "aybuke";
	ft_bzero(s, 3);
	printf("%s\n", s);
	printf("%s\n", s + 4);
}*/
