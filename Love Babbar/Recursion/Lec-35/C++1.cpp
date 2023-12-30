// Coding Ninjas
// Merge Sort
#include <iostream>
using namespace std;

void merge(int arr[], int s, int mid, int e)
{
    // Your code here
    int array[e - s + 1];
    int i = s;
    int j = mid + 1;
    int k = 0;

    while (i <= mid && j <= e)
    {
        if (arr[i] < arr[j])
        {
            array[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            array[k] = arr[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        array[k] = arr[i];
        i++;
        k++;
    }
    while (j <= e)
    {
        array[k] = arr[j];
        k++;
        j++;
    }

    for (int i = s; i <= e; i++)
    {
        arr[i] = array[i - s];
    }
}
void mergeSort(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = s + (e - s) / 2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    merge(arr, s, mid, e);
}

int main()
{
    cout << "Merge Sort" << endl;
}