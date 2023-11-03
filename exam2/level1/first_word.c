#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    if(ac == 2)
    {
        while(av[1][i] == ' ') // baştaki boşluklar için
            i++;
        while(av[1][i] != ' ' && av[1][i])
        {
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}

//1. argümanda girilen cümlenin ilk kelimesini yazdırır(ör: "aybuke ucak" çıktı aybuke)