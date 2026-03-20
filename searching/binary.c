#include <stdio.h>
int binarysearch(int arr[], int left, int right, int data)
{
    if (right >= left)
    {
        int mid = left + right / 2;

        if (arr[mid] == data)
            return mid;
        if (arr[mid] > data)
            return binarysearch(arr, left, mid - 1, data);
        // else the element can only be present
        return binarysearch(arr, mid + 1, right,data);
    }
    return -1;
}

int main(void)
{
    int arr[] = {11, 98, 2,6, 64, 24};
    int n = sizeof(arr) / sizeof(arr[0]);
    int data = 11;
    int result = binarysearch(arr, 0, n - 1, data);
    if (result == -1)
        printf("element not found!!!");
    else
        printf("element found at %d ", result);
    return 0;
}