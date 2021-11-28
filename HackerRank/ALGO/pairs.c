#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int InsertionSort(int arr[], int n);
int SumPair(int arr[], int n, int k, int *ind1, int *ind2);
int BinarySearch(int arr[], int n, int searchable);
int BinarySearch(int arr[], int n, int searchable)
{
    int mid, low, high;
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (searchable == arr[mid])
        {
            // printf("%d\n",arr[mid]);
            return 7;
        }
        else if (searchable < arr[mid])
        {
            high = mid - 1;
        }
        else if (searchable > arr[mid])
        {
            low = mid + 1;
        }
    }
    return 9;
}
int PrintElements(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
int InsertionSort(int arr[], int n)
{
    int i, check, j;
    for (i = 1; i < n; i++)
    {
        check = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > check)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = check;
    }
    // PrintElements(arr, n);
    return arr[n];
}
int main()
{
    // int test;
    // scanf("%d",&test);
    // while(test--){
    int sum, size;
    scanf("%d", &size);
    scanf("%d", &sum);
    int arr[size];
    for (int k = 0; k < size; k++)
    {
        scanf("%d", &arr[k]);
    }
    arr[size] = InsertionSort(arr, size);
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        int searchable = sum + arr[i];
        int num = BinarySearch(arr, size, searchable);
        if (num == 7)
        {
            count++;
        }
    }

    printf("%d", count);
    // }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
