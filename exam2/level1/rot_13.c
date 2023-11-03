#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    if(ac == 2)
    {
        while(av[1][i])
        {
            if((av[1][i] >= 'a' && av[1][i] <= 'm') || (av[1][i] >= 'A' && av[1][i] <= 'M'))
                av[1][i] += 13;
            else if((av[1][i] >= 'n' && av[1][i] <= 'z') || (av[1][i] >= 'N' && av[1][i] <= 'Z'))
                av[1][i] -= 13;
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}


//a > n, n > a, m > z, z > m olacak (a nın 13 fazlası n, z nin 13 eksiği m)  13 + 13 = 26 tane alfabetik karakter vardır