#include <iostream>
#include <cmath>

bool is_palindromic(int number = 0)
{
    int x[(int)log10(number) + 1] = {0}, MAX_SIZE = sizeof(x) / sizeof(int);

    for (int i = 0; i < MAX_SIZE; i++)
    {
        x[i] = number / pow(10, MAX_SIZE - 1 - i);

        number = number - pow(10, MAX_SIZE - 1 - i) * x[i];
    }

    for (int i = 0; i < (MAX_SIZE) / 2; i++)
        if (x[i] != x[(MAX_SIZE)-i - 1])
            return false;

    return true;
}

int main(int argc, char *argv[])
{
    int MAX = 0;

    for (int i = 100; i < 999; i++)
    {
        for (int j = 100; j < 999; j++)
        {
            if (is_palindromic(i * j) && i * j > MAX)
            {
                MAX = i * j;
            }
        }
    }

    std::cout << MAX << std::endl;

    return 0;
}