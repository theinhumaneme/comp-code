#include <stdio.h>

// void InsertionSort(int size,int array[]){
//     int temp,i,j;
//     for(i =0;i<size;i++){
//         int temp = array[i];
//         for(j=i-1;j>0;j--)
//         {
//             if (temp<array[j]){
//                 array[j+1]=array[j];
//             }
//             else{
//                 array[j+1]=temp;
//             }
//             // for(int k=0;k<size;k++){
//             //     printf("%d\t",array[k]);
//             // }
//         }
//     // printf("\n");
//     }
//     for(int k=0;k<size;k++){
//         printf("%d\t",array[k]);
//     }
// }

// int InsertionSort(int n, int arr[])
// {
    // int i, check, j, count, sum, flag, counter, exchanges;
    // sum = 0;
    // count = 0;
    // exchanges =0;
    // for (i = 0; i < n; i++)
    // {
        // flag = 0;
        // counter = 0;
        // check = arr[i];
        // j = i - 1;
        // while (j >= 0 && arr[j] > check)
        // {
            // flag = 1;
            // counter = 1;
            // arr[j + 1] = arr[j];
            // j = j - 1;
        // }
        // if (counter == 1)
        // {
            // count++;
            // counter = 0;
        // }
    // }
    // printf("%d\n", count);
    // for (int k = 0; k < n; k++)
    // {
        // printf("%d\t", arr[k]);
    // }
    // printf("%d\n",sum);
// }

void InsertionSort(int arr[], int n)
{   
    int count,counter,flag;
    count = 0;
    counter = 0;
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        flag = 0;
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            flag =1;
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
        if (flag == 1){
            printf("%d ",j+1);
        }
        else{
            printf("0 ");
        }
        // printf("%d\t",count);
    }
    for (int k = 0; k < n; k++)
    {
        printf("%d\t", arr[k]);
    }
    printf("\n");
}

int main()
{
    int test_cases;
    scanf("%d",&test_cases);
    for (int i=0;i<test_cases;i++){
        int size;
    scanf("%d", &size);
    int array[size];
    for (int k = 0; k < size; k++)
    {
        scanf("%d", &array[k]);
    }
    InsertionSort(array, size);
    }
}
