
#include <bits/stdc++.h>
using namespace std;
void heapify(int arr[], int N, int i)
{


    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < N && arr[l] > arr[largest])
        largest = l;
    if (r < N && arr[r] > arr[largest])
        largest = r;
    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, N, largest);
    }
}
void heapSort(int arr[], int N)
{

    for (int i = N / 2 - 1; i >= 0; i--)
        heapify(arr, N, i);

    for (int i = N - 1; i > 0; i--) {

        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}
void printArray(int arr[], int N)
{
    for (int i = 0; i < N; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}



int kthSmallest(int arr[], int N, int K)
{

    heapSort(arr ,N);


    return arr[K - 1];
}


int main()
{
    int arr[] = { 12, 3, 5, 7, 19 };
    int N = sizeof(arr) / sizeof(arr[0]);
    int k;
    cin>>k;
    heapSort(arr, N);
    printArray(arr,N);


    cout << k<<"'th smallest element is "
         << kthSmallest(arr, N, k);
    return 0;
}
