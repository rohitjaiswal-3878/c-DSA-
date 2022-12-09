#include <iostream>
using namespace std;

void bubblesort(int arr[], int len)
{

    for (int i = 0; i < len - 1; i++)
    {
        int flag = 0;
        for (int j = 0; j < len - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = 1;
            }
            
        }
        if (flag = 0)
        {
            break;
        }
    }
    cout << "\nafter sorting :";

    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int len;
    cout << "enter the length of the array : ";
    cin >> len;
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        cout << "enter the element at index " << i << " :";
        cin >> arr[i];
    }
    cout << "before sorting :";
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    bubblesort(arr, len);

    return 0;
}