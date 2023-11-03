#include <stdlib.h>

size_t  ft_strcspn(const char *s, const char *reject)
{
    int i = 0;
    int j = 0;

    while(s[i])
    {
        j = 0;
        while(reject[j])
        {
            if(s[i] == reject[j])
                return(i); // eşleşme bulursa s deki eşleşen karakterin indeksi döndürülür
            j++;
        }
        i++;
    }
    return(i); // eşleşme bulamazsa s nin uzunluğunu döndürür
}


/*#include <stdio.h>
int main()
{
    const char *s = "aybuke";
    const char *reject = "zkz";

    size_t a = ft_strcspn(s, reject);
    printf("%zu", a);
}*/



#include <stdlib.h>
#include <string.h>
size_t  ft_strcspn(const char *s, const char *reject)
{
    int i = strcspn(s, reject);
    return(i);
}