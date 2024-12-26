#include <stdio.h>

int binarySearch(int arr[], int size, int target)
{
    int left = 0, right = size - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}

int binarySearchRecursive(int arr[], int left, int right, int target)
{
    if (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            return binarySearchRecursive(arr, mid + 1, right, target);
        }
        else
        {
            return binarySearchRecursive(arr, left, mid - 1, target);
        }
    }

    return -1;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Nhập phần tử cần tìm: ");
    scanf("%d", &target);

    int result = binarySearch(arr, size, target);
    if (result != -1)
    {
        printf("Phần tử %d được tìm thấy tại chỉ số %d (vòng lặp).\n", target, result);
    }
    else
    {
        printf("Phần tử %d không tồn tại trong mảng (vòng lặp).\n", target);
    }

    result = binarySearchRecursive(arr, 0, size - 1, target);
    if (result != -1)
    {
        printf("Phần tử %d được tìm thấy tại chỉ số %d (đệ quy).\n", target, result);
    }
    else
    {
        printf("Phần tử %d không tồn tại trong mảng (đệ quy).\n", target);
    }

    return 0;
}
