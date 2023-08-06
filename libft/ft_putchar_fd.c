/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayucak <ayucak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 17:52:09 by ayucak            #+#    #+#             */
/*   Updated: 2023/07/22 20:38:48 by ayucak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

//fd ile gönderilen dosyaya karakter yazdırır
//O_CREAT = dosya oluşturur (mevcut değilse)
//O_RDWR = dosyayı hem okuma hem de yazma erişimli açar
//0777 = bir dosya ya da klasöre okuma, yazma ve çalıştırma yetkisi verir

/*#include <fcntl.h>
int main()
{
	int fd = open("putchar.txt", O_CREAT | O_RDWR, 0777);
	ft_putchar_fd('a', fd);
}*/
