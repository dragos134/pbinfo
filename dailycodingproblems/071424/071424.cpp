#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void populateArray(int *array)
{
    srand(static_cast<unsigned>(time(0)));

    for (int i = 0; i < 1000000; i++)
    {
        array[i] = rand();
    }
}

void orderEfficiently(int *array)
{
    // bubblesort
    int n = 1000000;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[i] > array[j])
            {
                int aux = array[i];
                array[i] = array[j];
                array[j] = aux;
            }
        }
    }
}

int main()
{
    int a[1000000];
    orderEfficiently(a);
    return 0;
}