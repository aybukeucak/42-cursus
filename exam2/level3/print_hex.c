#include <unistd.h>
#include <stdlib.h>

void hex(int n)
{
    if(n >= 16)
        hex(n / 16);
    write(1, &"0123456789abcdef"[n % 16], 1); //girilen sayıyıyı hex şeklinde yazdırma
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        hex(atoi(av[1]));
    }
    write(1, "\n", 1);
}