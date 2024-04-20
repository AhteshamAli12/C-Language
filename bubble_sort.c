#include <stdio.h>

void bubble_sort(int arr[], int l);

int main()
{
    int l;
    printf("Enter array lenght: ");
    scanf("%d", &l);
    int num[l];
    printf("Enter array numbers: ");
    for (int i = 0; i < l; i++)
    {
        scanf("%d", &num[i]);
    }
    printf("Array:  ");
    for (int i = 0; i < l; i++)
    {
        printf("%d\t", num[i]);
    }
    bubble_sort(num, l);

    return 0;
}
void bubble_sort(int arr[], int l)
{
    int temp;
    for (int i = 0; i < l - 1; i++)
    {
        for (int j = 0; j < l - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\nSorted Array:  ");
    for (int i = 0; i < l; i++)
    {
        printf("%d\t", arr[i]);
    }
}