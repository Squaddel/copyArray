#include <stdio.h>

int main(int argc, char const *argv[])
{
    int test[] = {1,2,3,4,5,10,11};
    int len = sizeof(test) / sizeof(test[0]);


    int new[len];
    char tmp;

    for(int i = 0; i < len; i++)
    {
        tmp = test[i] + 64;
        new[i] = tmp;
    }

    for(int i = 0; i < len; i++)
    {
        printf("%c", new[i]);
    }

    return 0;
}
