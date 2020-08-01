#include <iostream>

const int LIMIT = 500;

unsigned long long int triangle_number(int N)
{
    return (N * (N - 1)) / 2;
}

int Div(int n)
{
    int NUMBER = 0;

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            NUMBER++;
        }
    }

    return NUMBER;
}

int main(int argc, char *argv[])
{
    int __MAX = 0;

    for (int i = 0; true; i++)
    {
        int __TRIANGLE_NUMBER = triangle_number(i);

        int __DIVISORS = Div(__TRIANGLE_NUMBER);

        if (__DIVISORS > __MAX)
        {
            __MAX = __DIVISORS;

            std::cout << i << " " << __TRIANGLE_NUMBER << " " << __DIVISORS << std::endl;
        }

        if (__DIVISORS > LIMIT)
        {
            break;
        }
    }

    std::cout << __MAX << std::endl;

    return 0;
}