#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int c = 0;
    if(ac == 2)
    {
        while(av[1][i])
        {
            if(av[1][i] >= 97 && av[1][i] <= 122) // a z arasındaysa
                c = av[1][i] - 96; // b harfi için(98 - 96 = 2 , c 2'ye eşit olur ve b yi 2 kere yazdırır)
            else if(av[1][i] >= 65 && av[1][i] <= 90) // A Z arasındaysa
                c = av[1][i] - 64;
            else //bir harf değilse direkt yazdırır
                write(1, &av[1][i], 1);
            while(c) //c değeri 0 olana kadar yazdırır
            {
                write(1, &av[1][i], 1);
                c--;
            }
            i++;
        }
    }
    write(1, "\n", 1);
}

//alfabedeki harf kaçıncı sıradaysa o kadar yaz (ör;abc > abbccc)
//eksta bi int c oluştur ve o harfi kaç kere yazacağını ata av[1][i] den a harfinden bir önceki ascii değerini çıkart c ye ata.