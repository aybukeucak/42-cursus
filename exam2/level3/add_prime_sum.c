#include <unistd.h>
#include <stdlib.h> // atoi için

void ft_print(int n) //sum tam sayısını yazdırmak için recursive fonksiyon
{
    if(n > 9)
        ft_print(n / 10);
    write(1, &"0123456789"[n % 10], 1);
}

int is_prime(int nb) // bir sayının asal olup olmadığını kontrol etmek için
{
    int i = 2;
    if(nb <= 1) // 1 den küçük eşitse asal değil
        return(0);
    while(i < nb)
    {
        if(nb % i == 0) // i ye kalansız bölünüyorsa asal değil
            return(0);
        i++;
    }
    return(1); // döngüden çıkıp hiç bir sayıya kalansız bölünmediyse asal sayıdır 
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int nb = atoi(av[1]); // tam sayıya çevirmek için atoi kullanılır
        int sum = 0;
        while(nb > 0) 
        {
            if(is_prime(nb))
                sum += nb; // eğer sayı asalsa sayı sum a eklenir
            nb--;
        }
        ft_print(sum);
    }
    else
        write(1, "0", 1);
    write(1, "\n", 1);
}

//verdiğimiz sayıdan önceki asal sayıları toplar 5 verdik diyelim 5 + 3 + 2 = 10 