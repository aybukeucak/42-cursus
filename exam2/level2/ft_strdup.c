#include <stdlib.h>

char	*ft_strdup(char *src) //dup duplicate kopyalamak
{
	size_t	i = 0;
	size_t	len = 0;

	while (src[len])
		len++;
	char *ptr = (char *)malloc(sizeof(char) * (len + 1));
    if (!ptr) // ptr null a eşitse null döndürür
		return (NULL);
    while (src[i])
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

#include <string.h>
char    *ft_strdup(char *src)
{
    char *a = strdup(src);
    return(a);
}