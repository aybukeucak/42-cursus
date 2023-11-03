#include <unistd.h>

int f(char *s, char c, int n)
{
	int i = 0;
	while (i < n)
	{
		if (s[i] == c)
			return(0);
		i++;
	}
	return(1);
}

int main(int ac, char **av)
{
	int i = 0;
	int j;

	if(ac == 3)
	{
		while(av[1][i])
		{
			j = 0;
			while(av[2][j])
			{
				if(av[1][i] == av[2][j])
				{
					if(f(av[1],av[1][i],i)) //0 dödürürse yazdırmaz çünkü 0 döndürürse tekrar eden karakter vardır.
					{
						write(1, &av[1][i], 1);
						break;
					}
				}
				j++;
			}
			i++;
		}
		
	}
	write(1, "\n", 1);
}

//1. argümandaki karakterleri 2. argümanda arar 1. argümanda tekrar eden karakterleri tekrar yazmaz