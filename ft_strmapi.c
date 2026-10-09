
#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *new_str;
    size_t i;

    new_str = (char*)ft_calloc(sizeof(char), ft_strlen(s) + 1);
    i = 0;
    while(i < ft_strlen(s))
    {
        new_str[i] = f(i, s[i]);
        ++i;
    }

    return new_str;
}