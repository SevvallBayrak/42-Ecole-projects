#include <unistd.h>
char *ft_rev_print (char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    i--;
    while(i>=0)
    {
        write(1,&str[i],1);
        i--;
    }
    return (str);

}
int main()
{
    char c[] = "sevval";
    ft_rev_print(c);
}