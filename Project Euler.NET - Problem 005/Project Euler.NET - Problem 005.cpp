#include <iostream>

const int MAX = 20;

int main(int argc, char *argv[])
{
    int arr[MAX] = {0}, i = 1, MULTIPLICADOR = 1, PRODUTO = 1;

    unsigned long int MIN = 1;

    for (int i = 0; i < MAX; i++)
    {
        arr[i] = i + 1;
    }

    while (true)
    {
        MULTIPLICADOR = 1;

        PRODUTO = 1;

        for (int k = 0; k < MAX; k++)
        {
            if (arr[k] % i == 0)
            {
                arr[k] /= i;

                MULTIPLICADOR = i;
            }

            PRODUTO *= arr[k];
        }

        MIN *= MULTIPLICADOR;

        if (MULTIPLICADOR == 1)
        {
            i++;
        }

        if (PRODUTO == 1)
        {
            break;
        }
    }

    std::cout << MIN << std::endl;

    return 0;
}
