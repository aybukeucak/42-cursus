#include <stdlib.h>

char *ft_strncpy(char *s1, char *s2, int n) // bellekte açtığın yere kelimeyi kopyala
{
	int i = 0;

	while (i < n && s2[i])
    {
		s1[i] = s2[i];
        i++;
    }
	s1[i] = '\0';
	return (s1);
}

char	**ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int wc = 0;
	while (str[i]) //kelime sayısını bul
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i])
			wc++;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
	}
	char **out = malloc(sizeof(char *) * (wc + 1)); // kelime sayısı ve null için yer aç
	i = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		j = i;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
		if (i > j)
		{
			out[k] = malloc(sizeof(char) * ((i - j) + 1)); //her kelimenin uzunluğu kadar yer aç
			ft_strncpy(out[k], &str[j], i - j);
            k++;
		}
	}
	out[k] = NULL; //son kelime null
	return (out); //yeni kelime grubunu döndür
}

#include <stdio.h>
int	main()
{
	char *str = "aybuke ucak	42";
	char **splt;

	splt = ft_split(str);

	int i = 0;
	while(splt[i])
	{
		printf("%s\n", splt[i]);
		i++;
	}
}