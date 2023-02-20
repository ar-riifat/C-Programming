#include <stdio.h>
int BinarySearch(int arr[], int n, int z)
{
    int l = 0, h = n - 1;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (z == arr[mid])
            return mid;
        else if (z > arr[mid])
            h = mid + 1;
        else
            l = mid - 1;
    }
    return -1;
}
int main()
{
    int arr[] = {2, 66, 11, 23, 24, 88, 64, 77, 108, 290};
    printf("Enter a number: ");
    int z;
    scanf("%d", &z);
    int index = BinarySearch(arr, 10, z);
    if (index != -1)
        printf("Number %d is found", z);
    else
        printf(" Number %d is not found", z);
}
