#include <unistd.h>

void donustur(int i)
{
    if(i>9)
        donustur(i/10);
    write(1,&"0123456789"[i%10],1);
    
}
int test(char *str,int i)
{
    int a = i;
    while(i >= 0)
    {
        i--;
        if(str[a] == str[i])
            return(0);
    }
    return(1);
}



int main(int argc , char **argv)
{
    if(argc == 2)
    {
        int i = 0;
        while(argv[1][i] != '\0')
        {
            if(test(argv[1],i)==1)
            {
                int count = 0;
                int a = 0;
                while(argv[1][a] != '\0')
                {
                    if(argv[1][i]==argv[1][a])
                        count++;
                    a++;
                }
                donustur(count);
                write(1,&argv[1][i],1);
            }
            i++;
            
        }
    }
    write(1,"\n",1);
    return (0);
}