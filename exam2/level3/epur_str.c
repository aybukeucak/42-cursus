#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    if(ac == 2)
    {
        while(av[1][i] <= 32) //baştaki boşlukları atlar
            i++;
        while(av[1][i])
        {
            if(av[1][i] > 32) //eğer boşluk değilse kelimeyi tek tek yazdırır
                write(1, &av[1][i], 1);
            else if(av[1][i + 1] > 32 && av[1][i])// bulunduğu indeksten bir sonraki bir karakterse ve bulunduğu karakter null değilse bir boşluk bırakır
                write(1, " ", 1);
            i++;
        }
    }
    write(1, "\n", 1);
}

// bir çok boşluğu tek boşluk haline getirir("  ay   bu   ke  " --> "ay bu ke")