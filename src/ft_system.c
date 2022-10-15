#include "../include/ft_system.h"

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_strlen(const char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

void    ft_putstr(const char *str)
{
    write(1, str , ft_strlen(str));
}

void    ft_put_number(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_put_number(nb * -1);
	}
	else if (nb > 9)
	{
		ft_put_number(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
	else
		ft_putchar(nb + '0');
}

int	ft_strcmp(char *s1 ,char *s2)
{
	int	i;

	i = 0;
	while((s1[i] && s2[i]) && (s1[i] == s2[i]))
		i++;
	return(s1[i] - s2[i]);
}
