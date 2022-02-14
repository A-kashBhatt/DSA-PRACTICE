#include <iostream>
using namespace std;
void reverse_array1(int *p, int length)
{
    int *q = new int[length];
    for (int i = 0; i < length; i++)
    {
        q[i] = p[length - 1 - i];
    }
    for (int i = 0; i < length; i++)
        p[i] = q[i];
}

void reverse_array2(int *p, int length)
{
    int i = 0;
    int j = length - 1;
    while (j > i)
    {
        int temp{p[i]};
        p[i++] = p[j];
        p[j--] = temp;
    }
}

int main()
{
    int arr[7]{5, 7, 6, 9, 5, 3, 12};
    cout << "original array is:";
    for (auto a : arr)
        cout << a << " ";

    reverse_array1(arr, 7);
    cout << "\nreversed array is:";

    for (auto a : arr)
        cout << a << " ";
}