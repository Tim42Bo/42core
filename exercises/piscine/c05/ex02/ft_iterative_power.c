#include "header.h"

int ft_iterative_power(int nb, int power)

{
    int result;
    int i;
    
    result = 1;
    i = 0;
    if (nb < 0)
    {
        return (0);
    }
    else if (nb == 0)
    {
        return (1);
    }
    while (i < power)
    {
        result = result * nb;
        i++;
    }
    return (result);
}

int myatoi(char *str)

{
    int i;
    int sign;
    int x;

    i = 0;
    sign = 1;
    x = 0;
    if (str[0] == '-')
    {
        sign = -1;
        i++;
    }
    while (str[i] != '\0')
    {
        x = x * 10 + str[i] - 48;
        i++;
    }
    return (sign * x);
}

int main(int argc, char **argv)

{
    int number;
    int power;
    number = myatoi(argv[1]);
    power = myatoi(argv[2]);
    printf("number: %d power %d = %d\n", number, power, ft_iterative_power(number, power));
    return (0);
}