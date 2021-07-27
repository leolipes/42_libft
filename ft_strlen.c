#include <stdio.h>

int ft_strlen(char *str)
{
    int contador;
    contador = 0;
    while (str[contador] != '\0')
    {
        contador++;
    }
    return(contador);
}

int main(void)
{
    int len;
    char *str;
    str = "abc";
    len = ft_strlen(str);
    printf("%d\n", len);
}
