// Heap Sort
#include <iostream>
using namespace std;

class heap
{
public:
    int arr[100];
    int size = 0;

    heap()
    {
        arr[0] = -1;
        size = 0;
    }

    void insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val;

        while (index > 1)
        {
            int parent = index / 2;

            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }

    void deleteFromHeap()
    {
        if(size == 0)
        {
            cout << "Nothing to delete" << endl;
            return;
        }

        arr[1] = arr[size];
        size--;

        // take root node to correct position

        int i=1;
        while(i<size)
        {
            int leftIndex = 2*i;
            int rightIndex = 2*i + 1;

            if(leftIndex <= size && arr[i] < arr[leftIndex])
            {
                swap(arr[i],arr[leftIndex]);
                i = leftIndex;
            }
            else if(rightIndex <= size && arr[i] < arr[rightIndex])
            {
                swap(arr[i],arr[rightIndex]);
                i=rightIndex;
            }
            else
            {
                return;
            }
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};


void heapify(int arr[],int n,int i)
{
    int largest = i;
    int left = 2*i;
    int right = 2*i + 1;

    if(left <= n && arr[left]> arr[largest])
    {
        largest = left;
    }
    if(right <= n && arr[right] > arr[largest])
    {
        largest = right;
    }

    if(largest != i)
    {
        swap(arr[i],arr[largest]);
        heapify (arr,n,largest);
    }
}

void heapSort(int arr[], int n)
{
    int size = n;

    while(size>1)
    {
        swap(arr[size],arr[1]);
        size--;
        heapify(arr,size,1);
    }
}

int main()
{
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);

    h.print();

    h.deleteFromHeap();
    h.print();

    int arr[6] = {-1,54,53,55,52,50};
    int n=5;
    // heap creation
    for(int i=n/2;i>=1;i--)
    {
        heapify(arr,n,i);
    }

    cout << "printing the Array" << endl;
    for(int i=1;i<=n;i++)
    {
        cout << arr[i] << " ";   
    }
    cout << endl;

    // heap Sort

    heapSort(arr,n);

    cout << "printing the Array" << endl;
    for(int i=1;i<=n;i++)
    {
        cout << arr[i] << " ";   
    }
    cout << endl;

    return 0;
}