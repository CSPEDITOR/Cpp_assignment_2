// 3) Write a program to sort 10 numbers in the array using following sorting algorithm and function
// overloading?
// a) merge sort
// b) quick sort
// c) heap sort
#include <iostream>
using namespace std;

class Sort
{
public:
    virtual void sort(int arr[], int n) = 0;
};

class MergeSort : public Sort
{
public:
    void merge(int arr[], int l, int m, int r)
    {
        int i, j, k;
        int n1 = m - l + 1;
        int n2 = r - m;

        int L[n1], R[n2];

        for (i = 0; i < n1; i++)
            L[i] = arr[l + i];
        for (j = 0; j < n2; j++)
            R[j] = arr[m + 1 + j];

        i = 0;
        j = 0;
        k = l;
        while (i < n1 && j < n2)
        {
            if (L[i] <= R[j])
            {
                arr[k] = L[i];
                i++;
            }
            else
            {
                arr[k] = R[j];
                j++;
            }
            k++;
        }

        while (i < n1)
        {
            arr[k] = L[i];
            i++;
            k++;
        }

        while (j < n2)
        {
            arr[k] = R[j];
            j++;
            k++;
        }
    }

    void sort(int arr[], int n) override
    {
        int currSize;
        int leftStart;

        for (currSize = 1; currSize <= n - 1; currSize = 2 * currSize)
        {
            for (leftStart = 0; leftStart < n - 1; leftStart += 2 * currSize)
            {
                int mid = min(leftStart + currSize - 1, n - 1);
                int rightEnd = min(leftStart + 2 * currSize - 1, n - 1);
                merge(arr, leftStart, mid, rightEnd);
            }
        }
    }
};

class QuickSort : public Sort
{
public:
    int partition(int arr[], int low, int high)
    {
        int pivot = arr[high];
        int i = (low - 1);

        for (int j = low; j <= high - 1; j++)
        {
            if (arr[j] < pivot)
            {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]);
        return (i + 1);
    }

    void sort(int arr[], int n) override
    {
        quickSortUtil(arr, 0, n - 1);
    }

private:
    void quickSortUtil(int arr[], int low, int high)
    {
        if (low < high)
        {
            int pi = partition(arr, low, high);

            quickSortUtil(arr, low, pi - 1);
            quickSortUtil(arr, pi + 1, high);
        }
    }
};

class HeapSort : public Sort
{
public:
    void heapify(int arr[], int n, int i)
    {
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left < n && arr[left] > arr[largest])
            largest = left;

        if (right < n && arr[right] > arr[largest])
            largest = right;

        if (largest != i)
        {
            swap(arr[i], arr[largest]);

            heapify(arr, n, largest);
        }
    }

    void sort(int arr[], int n) override
    {
        for (int i = n / 2 - 1; i >= 0; i--)
            heapify(arr, n, i);

        for (int i = n - 1; i >= 0; i--)
        {
            swap(arr[0], arr[i]);

            heapify(arr, i, 0);
        }
    }
};

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[10];
    cout << "Enter 10 elements: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    cout << "array[10]:";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int choice;
    cout << "Enter your choice (1 for Merge Sort, 2 for Quick Sort, 3 for Heap Sort): ";
    cin >> choice;

    Sort *sort;
    switch (choice)
    {
    case 1:
        sort = new MergeSort();
        break;
    case 2:
        sort = new QuickSort();
        break;
    case 3:
        sort = new HeapSort();
        break;
    default:
        cout << "Invalid choice." << endl;
        return 1;
    }

    sort->sort(arr, 10);

    cout << "Sorted array: ";
    printArray(arr, 10);

    delete sort;
    return 0;
}
