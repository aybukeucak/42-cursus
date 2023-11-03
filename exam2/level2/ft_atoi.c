int ft_atoi(const char *str)
{
    int i = 0;
    int a = 1;
    int b = 0;

    while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
        i++;
    if(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            a = -1;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        b = (b * 10) + (str[i] - '0'); /// basamak ekleyip (b değişkenini 10 ile çarpıyoruz) + charı inte çeviriyoruz (str[i] den 48 çıkarıyoruz)
        i++;
    } 
    return(a * b);
}


#include <stdlib.h>

int     ft_atoi(const char *str)
{
    int i = atoi(str);
    return(i);
}

//kısa atoi
int		ft_atoi(char *str)
{
	int i;
	int b;

	i = 0;
	b = 0;
	while (str[i] != '\0')
	{
		b = (b * 10) + (str[i] - '0');
		i++;
	}
	return (b);
}