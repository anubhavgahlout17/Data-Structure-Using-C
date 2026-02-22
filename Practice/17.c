#include <stdio.h>

void display(int arr[], int size)
{
    printf("--Displaying Elements--\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void Insertion(int arr[], int size)
{
    printf("Enter %d element: ", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}
void Deletion(int arr[], int *size)
{
    int index;
    printf("Enter index of element to be deleted between 0 to 4 : ");
    scanf("%d", &index);
    int element = arr[index];
    for (int i = index; i < *size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    (*size)--;
    printf("%d element is Deleted\n", element);
}

int main()
{
    int arr[5];
    int menu;
    int size = 5;

    do
    {  
        printf("\n");
        printf("1. Insert Element\n");
        printf("2. Delete Element\n");
        printf("3. Display Element\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &menu);

        switch (menu)
        {
        case 1:
            Insertion(arr, size);
            break;

        case 2:
            Deletion(arr, &size);

            break;

        case 3:
            display(arr, size);
            break;

        case 4:
            return 0;

        default:
            printf("Invalid Choice");
            break;
        }

    } while (1);

    return 0;
}