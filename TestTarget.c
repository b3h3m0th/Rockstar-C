/*
 * TestTarget.c
 *
 * Test target for the c to rockstar converter
 *
 * Created: 02.08.2021 15:42:57
 *  Author: TjarkG
 */

#include <stdio.h>

int modulo(int divident,int divisor)
{
    while (divident >= divisor)
    {
        divident -= divisor;
    }
    return divident;
}

int main(void)
{
    int max = 100;
    int i = 0;
    i += i;
    while (i < max)
    {
        i ++;
        //if(modulo(i, 15) == 0)
        //{
            printf("FizzBuzz!\n");
            continue;
        //}
        /*if(modulo(i, 3) == 0)
        {
            printf("Fizz!\n");
            continue;
        }
        if(modulo(i, 5) == 0)
        {
            printf("Buzz!\n");
            continue;
        }*/
        printf("%d\n", i);
    }
    return 0;
}