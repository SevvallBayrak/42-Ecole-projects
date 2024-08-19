#include <stdio.h>
char    *ft_strrev(char *str)
{
    int len = 0;
    while(str[len] != '\0')
        len++;
    int i = 0;
    while(len / 2 > i)
    {
        char swap;
        swap = str[i];
        str[i] = str[len -1 -i];
        str[len -1 -i] = swap;
        i++;
    }
    return (str);
}
int main()
{
    char c[] = "sevval";
    printf("%s" , ft_strrev(c));
}