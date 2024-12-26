#include <stdio.h>

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int linearSearch(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
            return i;
    }
    return -1;
}

int binarySearch(int arr[], int n, int target)
{
    int left = 0, right = n - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int n;

    printf("Nhập số phần tử của mảng: ");
    scanf("%d", &n);

    int arr[n];

    printf("Nhập các phần tử của mảng: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Mảng ban đầu: \n");
    printArray(arr, n);

    insertionSort(arr, n);

    printf("Mảng sau khi sắp xếp: \n");
    printArray(arr, n);

    int target;
    printf("Nhập giá trị cần tìm: ");
    scanf("%d", &target);

    int linearResult = linearSearch(arr, n, target);
    if (linearResult != -1)
        printf("Tìm kiếm tuyến tính: Phần tử %d được tìm thấy tại vị trí %d.\n", target, linearResult);
    else
        printf("Tìm kiếm tuyến tính: Không tìm thấy phần tử %d.\n", target);

    int binaryResult = binarySearch(arr, n, target);
    if (binaryResult != -1)
        printf("Tìm kiếm nhị phân: Phần tử %d được tìm thấy tại vị trí %d.\n", target, binaryResult);
    else
        printf("Tìm kiếm nhị phân: Không tìm thấy phần tử %d.\n", target);

    return 0;
}
