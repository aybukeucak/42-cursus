#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int i = 2;
        int nb = atoi(av[1]);
        if(nb == 1)
            printf("1");
        while(nb >= i)
        {
            if(nb % i == 0)
            {
                printf("%d", i);
                if(nb == i)
                    break;
                printf("*");
                nb /= i;
                i--;
            }
            i++;
        }
    }
    printf("\n");
}