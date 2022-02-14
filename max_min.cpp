// This is a program to find maximum and minimum elements in an array.
#include <iostream>
using namespace std;
int main()
{
    int arr[7]{3, 8, 2, 7, 6, 9, 5};
    int max, min;
    max = min = arr[0];
    for (auto a : arr)
    {
        if (a > max)
            max = a;
        else
        {
            if (a < min)
                min = a;
        }
    }
    cout << "The maximum and minimum elements in your array are " << max << " and " << min << " respectively";
}