#include <stdio.h>

/// Written by Nathan Weisskopf
/// ITSC 2181 - Spring 2024 

/// Algorithm help recieved on https://www.javatpoint.com/quick-sort

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int start, int end) 
{
    int pivot = arr[end];
    int i = start - 1;
    for (int j = start; j < end; j++) {
        if (arr[j] < pivot)
        {
            i = i + 1;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[end]);
    return i + 1;
}

void sort (int arr[], int start, int end)
{
    if (start < end)
    {
        int p = partition(arr, start, end);
        sort(arr, start, p - 1);
        sort(arr, p + 1, end);
    }
}

void printArr(int arr[], int len) 
{
    for (int i = 0; i < len; i++) 
    {
        printf("%d ", arr[i]);
    }
}

int main() {
    int arr[10];

    printf("Please enter 10 integer values each separated by a space: \n");

    scanf("%d %d %d %d %d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6], &arr[7], &arr[8], &arr[9]);

    int len = sizeof(arr) / sizeof(arr[0]);

    sort(arr, 0, len - 1);

    printf("The list after sorting: \n");

    printArr(arr, len);

    return 0;
}