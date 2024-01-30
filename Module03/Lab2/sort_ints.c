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
        printf("%d\n", arr[i]);
    }
}

int main() {
    int arr[] = {5, 6, 4, 10, 3, 2, 1, 7, 8, 9};

    int len = sizeof(arr) / sizeof(arr[0]);

    sort(arr, 0, len - 1);

    printArr(arr, len);

    return 0;
}