#include <iostream>

const int LIMIT = 2000000;

int main(int argc, char *argv[])
{
    unsigned long int SUM = 0;

    int LIST[LIMIT + 1] = {0};

    for (int i = 2; i <= LIMIT; i++)
    {
        for (int j = i * 2; j <= LIMIT; j = j + i)
        {
            LIST[j] = j;
        }
    }

    for (int i = 2; i < LIMIT; i++)
    {
        if (LIST[i] > 0)
        {
            continue;
        }

        SUM += i;
    }

    std::cout << SUM << std::endl;

    return EXIT_SUCCESS;
}