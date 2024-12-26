#include <stdio.h>

int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {99, 53, 72, 88, 16, 22};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Nhập phần tử cần tìm: ");
    scanf("%d", &target);

    int result = linearSearch(arr, size, target);

    if (result != -1)
    {
        printf("Phần tử %d được tìm thấy tại chỉ số %d.\n", target, result);
    }
    else
    {
        printf("Phần tử %d không tồn tại trong mảng.\n", target);
    }

    return 0;
}
