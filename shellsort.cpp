#include <iostream>
using namespace std;
void shellsort(int arr[], int len)
{
    for (int gap = len / 2; gap >= 1; gap = gap / 2)
    {
        for (int j = gap; j < len; j++)
        {
            for (int i = j - gap; i >= 0; i = i - gap)
            {
                if (arr[i] > arr[i+gap])
                {
                    swap(arr[i], arr[i+gap]);
                }
                else
                {
                    break;
                }
            }
        }
    }

    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int len;
    cout << "enter the len of array :";
    cin >> len;
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        cout << "enter the value at index " << i << " :";
        cin >> arr[i];
    }
    shellsort(arr, len);
    return 0;
}