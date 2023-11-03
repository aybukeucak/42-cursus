#include <unistd.h>
#include <stdlib.h>

void f(int n)
{
    if(n > 9)
        f(n / 10);
    write(1, &"0123456789"[n % 10], 1);
}

int main(int ac, char **av)
{
    int i = 1;
    if(ac == 2)
    {
        int nb = atoi(av[1]);
        
        while(i <= 9)
        {
            f(i);
            write(1, " x ", 3);
            f(nb);
            write(1, " = ", 3);
            f(i * nb);
            write(1, "\n", 1);
            i++;
        }
    }
    else
        write(1, "\n", 1);
}