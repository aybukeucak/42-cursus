int ft_strcmp(char *s1, char *s2) // cmp compare = karşılaştırmak
{
    int i = 0;
    
    while(s1[i] && s2[i] && s1[i] == s2[i])
        i++;
    return(s1[i] - s2[i]);
}

// aynı indisleri karşılaştırır farklıysa ascii farkını döndürür

#include <string.h>
int    ft_strcmp(char *s1, char *s2)
{
    int i = strcmp(s1, s2);
    return(i);
}