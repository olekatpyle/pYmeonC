#include <stdio.h>

int main(int argv, char **argc)
{
    if(argv > 1)
    {
        printf("Hellow %s,\nhellow GitHub!\n", argc[1]);
    }
    else
    {
        printf("Hellow orld,\nhellow GitHub!\n");
    }

    return(0);
}
