// Coding Ninjas
// Quick Sort
#include <iostream>
using namespace std;

int partition(int arr[], int low, int high)
{
    // Your code here
    int pivot = arr[low];
    int index = low;
    for (int i = low; i <= high; i++)
    {
        if (arr[i] < pivot)
        {
            index++;
        }
    }
    swap(arr[low], arr[index]);

    int i = low;
    int j = high;

    while (i < index && j > index)
    {
        if (arr[i] < pivot)
        {
            i++;
        }
        else if (arr[j] >= pivot)
        {
            j--;
        }
        else if (arr[i] >= pivot && arr[j] < pivot)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return index;
}

void quickSort(int arr[], int low, int high)
{
    if (low >= high)
    {
        return;
    }

    int index = partition(arr, low, high);

    quickSort(arr, low, index - 1);
    quickSort(arr, index + 1, high);
}

int main()
{
    cout << "Quick Sort" << endl;
}
