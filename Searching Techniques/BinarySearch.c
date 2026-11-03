#include <stdio.h>

int binarySearch(int n, int arr[], int key)
{
    int l = 0, r = n - 1, mid;

    while (l <= r)
    {
        mid = (l + r) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int n, key, ans;

    printf("Enter length of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements in sorted order:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter key value: ");
    scanf("%d", &key);

    ans = binarySearch(n, arr, key);

    if (ans == -1)
        printf("Not found");
    else
        printf("Element found at index %d", ans);

    return 0;
}
