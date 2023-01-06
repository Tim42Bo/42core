# include "header.h"

int ft_iterative_factorial(int nb)

{
    int factorial;    

    factorial = 1;
    if (nb < 0)
        return (0);
    else if (nb > 1)
    {
        while (nb > 0)
        {
            factorial = factorial * nb;
            nb--;
        }
    }
    return (factorial);
}

int myatoi(char *str)
{
    int i;
    int x;
    int sign;

    sign = 1;
    x = 0;
    i = 0;
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

    number = myatoi(argv[1]);
    printf("%d\n", number);
    printf("result: %i\n", ft_iterative_factorial(number));
    return (0);
}