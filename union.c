#include <unistd.h>

int test(char *str , int i)
{
    int a = i;
    while(i>=0)
    {
        i--;
        if(str[i]==str[a])
        {
            return (0);
        }
    }
    return(1);
}
int test2(char *str , int i)
{
    int a = 0;
    while(i>=0)
    {
        i--;
        if(str[i]==str[a])
        {
            return (0);
        }
    }
    return (1);
}

int main(int argc , char **argv)
{
    if(argc==3)
    {
        int i = 0;
        while(argv[1][i] != '\0')
        {
            int a = 0;
            while(argv[2][a] != '\0')
            {
                if(argv[2][a]==argv[1][i] && test(argv[1],i)==1)
                {
                    write(1,&argv[1][i],1);
                    break;
                }
                a++;
            }
            i++;
        }
        i = 0;
        while(argv[2][i] != '\0')
        {
            int b = 0;
            while (argv[1][b] != '\0')
            {
                if((argv[1][b]!=argv[2][i]) && test(argv[2],i))
                {
                    write(1,&argv[2][i],1);
                    break;
                }
                b++;
            }
            i++;
        }
    }
}