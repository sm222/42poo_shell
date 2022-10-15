
#ifndef FT_SYSTEM_H_
# define FT_SYSTEM_H_

# include "./ft_text.h"
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdlib.h>
# include <time.h>
# include <dirent.h>
#include <fcntl.h>

void menu_loop(char *name,char *call_back);
void    ft_putchar(char c);
int ft_strlen(const char *str);
void    ft_putstr(const char *str);
void    ft_put_number(int nb);
int	ft_strcmp(char *s1 ,char *s2);


#endif // FT_SYSTEM_H_
