#include <stdio.h>

int main(void)
{
    int x = 0;
    for (int i = 0; i < 100; i++)
    {
        x += i;
    }

    print(x);
}