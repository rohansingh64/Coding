#include <iostream>
#include <vector>
using namespace std;

int partitioning(vector<int> &arr, int l, int h)
{

    int pivot = arr[l];

    int i = l;
    int j = h;

    while (true)
    {

        if (arr[i] <= pivot)
        {
            i++;
        }
        if (arr[j] > pivot)
        {
            j--;
        }
        if ((i < j) && (arr[j] <= pivot) && (arr[i] > pivot))
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
        if ((i >= j) && (arr[j] <= pivot) && ((arr[i] > pivot) || (i == h)))
        {
            swap(arr[j], arr[l]);
            return j;
        }
    }
}

void quicksort(vector<int> &arr, int l, int h)
{
    if (l >= h)
    {
        return;
    }
    int pivot_index = partitioning(arr, l, h);
    quicksort(arr, l, pivot_index - 1);
    quicksort(arr, pivot_index + 1, h);
}

void sorting(vector<int> &arr)
{

    int n = arr.size();

    int l = 0;
    int h = n - 1;

    quicksort(arr, l, h);
}

int main()
{

    int n;

    cout << "enter size of vector : " << endl;
    cin >> n;

    vector<int> arr(n);

    cout << "enter elements of vector : " << endl;

    int e;
    for (int i = 0; i < n; i++)
    {

        cin >> e;
        arr[i] = e;
    }

    cout << "arr is : " << endl;

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    sorting(arr);

    cout << "arr is after sorting : " << endl;

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}