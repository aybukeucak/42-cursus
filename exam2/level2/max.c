int max(int *tab, unsigned int len)
{
    unsigned int i = 0;
    int res = tab[i];

    while(i < len)
    {
        if(res < tab[i])
            res = tab[i];
        i++;
    }
    return(res);
}

// tam sayı dizisinin en büyük elemanını yazdırır