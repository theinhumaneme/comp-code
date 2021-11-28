#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int Sort(int array[], int n);
int SumTwo(int array[], int n, int k);

int Sort(int array[], int n)
{
    int i, temp, j;
    for (i = 1; i < n; i++)
    {
        temp = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > temp)
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = temp;
    }
    return array[n];
}
int SumArray(int arr[],int n){
    int sum =0;
    for (int i=0;i<n;i++){
        sum += arr[i];
    }
    return sum;
}
int SumRem(int num1,int num2,int sum){
    return sum - num1 - num2;
}
int SumTwo(int array[], int n, int k)
{
    array[n] = Sort(array, n);
    int p1 = 0, p2 = n - 1;
    int sum_array = SumArray(array,n);
    while (p1 != p2)
    {
        printf("%d %d\n",array[p1],array[p2]);
        if ((array[p1] + array[p2]) > SumRem(array[p1],array[p2],sum_array))
        {
            p2--;
        }
        else if ((array[p1] + array[p2]) < k)
        {
            p1++;
        }
        else if ((array[p1] + array[p2]) == k)
        {
            return 7;
        }
            
    }
    return 9;
}
int main()
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        int sum, size;
        scanf("%d", &size);
        sum = size;
        int array[size];
        for (int k = 0; k < size; k++)
        {
            scanf("%d", &array[k]);
        }
        if (SumTwo(array, size, sum) == 7)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
