unsigned int    lcm(unsigned int a, unsigned int b) //en küçük ortak katını döndürür(ekok)
{
    unsigned int n;
    if(a == 0 || b == 0)
        return(0);
    if(a > b)
        n = a;
    else
        n = b;
    while(1) //sonsuz döngüye alır 
    {
        if(n % a == 0 && n % b == 0)
            return(n);
        n++; 
    }
}