#include <string.h>

char *ft_strrev(char *str)
{
    int i = 0;
    int len = strlen(str) - 1; 
    int tmp;

    while(i < len)
    {
        tmp = str[i];
        str[i] = str[len];
        str[len] = tmp;
        i++;
        len--;
    }
    return(str);
}

// str yi tersten yazdırma bunun için swap kullan 

/*#include <stdio.h>
int main()
{
    char a[20] = "aybuke";
    ft_strrev(a);
    printf("%s", a);
}*/