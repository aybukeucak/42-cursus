#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    if(ac == 2)
    {
        while(av[1][i]) // dizinin sonuna kadar i yi arttır
            i++;
        i--;
        while(av[1][i] && av[1][i] <= 32) 
            i--;
        while(av[1][i] && av[1][i] > 32)
            i--;
        i++;
        while(av[1][i] && av[1][i] > 32)
        {
            write(1, &av[1][i] ,1);
                i++;
        }
    }
    write(1, "\n", 1);
}