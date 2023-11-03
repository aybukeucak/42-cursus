#include <unistd.h>

void f(int n)
{
    if(n > 9)
        f(n / 10);
    write(1, &"0123456789"[n % 10], 1);
}

int main(int ac, char **av)
{
    (void)av;
    f(ac - 1);
    write(1, "\n", 1);
}

// kaç tane ac girildiğini sayar av yi kullanmadığımız için (void)av; şeklinde tanımlarız