#include <unistd.h>

void donustur(int i)
{
        if(9<i)
        {
            donustur(i/10);
        }
    write(1,&"0123456789"[i%10],1);
}
int main()
{
    int i = 1;
    while(i<101)
    {
        if(i%15==0)
            write(1,"fizzbuzz\n",9);
        else if(i%3==0)
            write(1,"fizz\n",5);
        else if(i%5==0)
            write(1,"buzz\n",5);
        else
        {
            donustur(i);
            write(1,"\n",1);

        } 
        i++;
    }
}