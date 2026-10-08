#include <iostream>
#include "Array.h"
using namespace std;

void task2()
{
    int arr[] = { -5, 10, 4, -2, 6 };
    int size = 5;
    int sum = 0;
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            sum += arr[i];
            count++;
        }
    }

    if (count > 0)
        cout << "Average = " << (double)sum / count << endl;
    else
        cout << "No positive elements" << endl;
}