#include <iostream>
using namespace std;


void heapify(int arr[], int N, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;


    if (left < N && arr[left] > arr[largest])
        largest = left;


    if (right < N && arr[right] > arr[largest])
        largest = right;


    if (largest != i)
    {
        swap(arr[i], arr[largest]);


        heapify(arr, N, largest);
    }
}


void buildHeap(int arr[], int N)
{

    for (int i = (N / 2) - 1; i >= 0; i--)
    {
        heapify(arr, N, i);
    }
}


void heapSort(int arr[], int N)
{

    buildHeap(arr, N);


    for (int i = N - 1; i > 0; i--)
    {

        swap(arr[0], arr[i]);


        heapify(arr, i, 0);
    }
}


void printArray(int arr[], int N)
{
    for (int i = 0; i < N; ++i)
        cout << arr[i] << " ";
    cout << endl;
}


int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int N = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, N);


    heapSort(arr, N);

    cout << "Sorted array: ";
    printArray(arr, N);

    return 0;
}

