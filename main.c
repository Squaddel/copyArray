#include <stdio.h>

int main(int argc, char const *argv[])
{
    int length = 5;
    int test[] = {1,2,3,4,5};
    int new[length];

    for(int i = 0; i < length; i++)
    {
        new[i] = test[i];
    }

    for(int i = 0; i < length; i++)
    {
        printf("%i", new[i]);
    }

    return 0;
}
