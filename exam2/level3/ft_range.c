#include <stdlib.h>
int ft_abs(int x)
{
    if(x < 0)
        return(-x);
    return(x);
}

int     *ft_range(int start, int end)
{
    int i = 0;
    int len = ft_abs((end - start)) + 1;
    int *res = (int *)malloc(sizeof(int) * len);

    while(i < len)
    {
        if(start < end) //start end den küçükse strartı tek tek artırır
        {
            res[i] = start;
            start++;
            i++;
        }
        else //start end den büyükse startı tek tek azaltır
        {
            res[i] = start;
            start--;
            i++;
        }
    }
    return(res);
}

//(1,3) 1,2,3

#include <stdio.h>
int main() 
{
    int start = 1;
    int end = 3;
    int *res = ft_range(start, end);
    
    printf("%d %d %d", res[0], res[1], res[2]);
}