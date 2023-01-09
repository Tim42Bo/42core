#include "header.h"

int ft_recursive_factorial(int nb)

{
    if (nb < 0)
    {
        return (0);
    }
    if (nb == 1 || nb == 0)
    {
        return (1);
    }
    return (nb * ft_recursive_factorial(nb -1));
}

int myatoi(char *str)

{
    int i;
    int x;
    int sign;

    sign = 1;
    i = 0;
    x = 0;
    if (str[0] == '-')
    {
        sign = -1;
        i++;
    }
    while (str[i] != 0)
    {
        x = x * 10 + str[i] - 48;
        i++;
    }
    return (sign * x);
}

int main(int argc, char **argv)

{
    int number;
    number = myatoi(argv[1]);
    printf("%d! = %d\n", number, ft_recursive_factorial(number));
    return(0);
}