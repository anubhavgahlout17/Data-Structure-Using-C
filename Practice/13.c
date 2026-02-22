#include <stdio.h>

int main()
{

    int arr[] = {2, 2, 4, 7, 7, 4, 2, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = 0;
    int key;
    printf("Enter element: ");
    scanf("%d", &key);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            count++;
        }
    }

    printf("Frequency of %d is %d\n", key, count);
    return 0;
}