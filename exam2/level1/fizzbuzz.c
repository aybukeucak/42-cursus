#include <unistd.h>
void fonks(int n)
{
    if(n > 9)
        fonks(n / 10);
    write(1, &"0123456789"[n % 10], 1);
}
int main()
{
    int i = 1;
    while(i <= 100)
    {
        if(i % 15 == 0)
            write(1, "fizzbuzz", 8);
        else if(i % 5 == 0)
            write(1, "buzz", 4);
        else if(i % 3 == 0)
            write(1, "fizz", 4);
        else
            fonks(i);
        write(1, "\n", 1);
        i++;
    }
}

//1 den 100 e kadar 15 in katları fizzbuzz 5 in katları buzz 3 ün katları fizz