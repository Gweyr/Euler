#include <iostream>
#include <cmath>

const int LIMIT = 500;

const std::string WHITESPACE = "\x20";

unsigned long long int triangle_number(int N)
{
    return (N * (N - 1)) / 2;
}

int Div(int n)
{
    // We start the counter including the value 1 and the n itself.

    int COUNTER = 2;

    for (int i = 2; i < sqrt(n) + 1; i++)
    {
        if (n % i == 0)
        {
            // At that moment, we add one to the counter if i is the root, otherwise we add 2, due to the reciprocal of i.

            COUNTER += (n / i == i) ? 1 : 2;
        }
    }

    return COUNTER;
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

            std::cout << i << WHITESPACE << __TRIANGLE_NUMBER << WHITESPACE << __DIVISORS << std::endl;
        }

        if (__DIVISORS > LIMIT)
        {
            break;
        }
    }

    std::cout << __MAX << std::endl;

    return 0;
}