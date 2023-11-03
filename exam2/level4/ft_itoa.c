#include <stdlib.h>
int numlen(int a) // eleman sayısını bulmak için
{
    int i = 0;
    if(a == 0)
        return(1);
    while(a > 0 || a < 0)
    {
        a /= 10;
        i++;
    }
    return(i);
}
char *ft_itoa(int nbr)
{
    int len;
    long n;
    char *d;

    n = nbr;
    len = numlen(nbr);

    if(nbr < 0)
    {
        len++;
        n = -n;
    }

    d = malloc(sizeof(char) * (len + 1));
    d[len] = '\0';

    while(n > 0)
    {
        d[--len] = n % 10 + '0';
        n /= 10;
    }
    if(nbr < 0)
        d[0] = '-';
    if(nbr == 0)
        d[0] = '0';
    return(d);
}


#include <stdio.h>
int main() 
{
	int	c = -42;
	printf("%s", ft_itoa(c));
}