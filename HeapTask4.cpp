
#include <bits/stdc++.h>
using namespace std;


int kthSmallest(int arr[], int N, int K)
{

    sort(arr, arr + N);


    return arr[K - 1];
}


int main()
{
    int arr[] = { 12, 3, 5, 7, 19 };
    int N = sizeof(arr) / sizeof(arr[0]);
    int k;
    cin>>k;


    cout << "K'th smallest element is "
         << kthSmallest(arr, N, k);
    return 0;
}

