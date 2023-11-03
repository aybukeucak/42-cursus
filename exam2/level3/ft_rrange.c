#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
    int i = 0;
    int len = abs((end - start)) + 1;
    int *res = (int *)malloc(sizeof(int) * len);

    while(i < len)
    {
        if(end < start)
        {
            res[i] = end;
            end++;
            i++;
        }
        else
        {
            res[i] = end;
            end--;
            i++;
        }
    }
    return(res);
}

//(1,3) 3,2,1


#include <stdio.h>
int main() 
{
    int start = 1;
    int end = 3;
    int *res = ft_rrange(start, end);
    
    printf("%d %d %d", res[0], res[1], res[2]);
}