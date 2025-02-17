#include <stdio.h>
int	ft_atoi(const char *str)
{
    int i = 0;
    int sign = 1;
    while(str[i] == ' ' || (str[i]>= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-') {
            sign = -1;
        }
        i++;
    }
    int result = 0;
    while(str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - 48);
        i++;
    }
    return(result * sign);
}
int main()
{
    char c[] = " -1234dsjkmcfe";
    printf("%d" , ft_atoi(c));
}