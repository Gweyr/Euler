#include <iostream>
#include <cmath>

/**
 * Retorna a potência de 10 menor ou igual (ordem de magnitude decimal) ao número informado por parâmetro.
 */
int order_of_magnitude(int number)
{
    return number < 10 ? 1 : 10 * order_of_magnitude(number / 10);
}

/**
 * Retorna o número algarismos de um dado número, aceita apenas números inteiros
 **/
int number_length(int number)
{
    return log10(order_of_magnitude(number)) + 1;
}

/**
 * Retorna uma flag indicando se um determinado número natural é palíndromo
 **/
bool is_palindromic(int number = 0)
{
    int x[number_length(number)] = {0}, MAX_SIZE = sizeof(x) / sizeof(int);

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
}
