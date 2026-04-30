#include<stdio.h>

void display(int *arr,int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    

}


void bubbleSortAdative(int *arr,int n){
    int isSorted = 0;
    for (int i = 0; i < n-1; i++)
    {
        isSorted = 1;
        int temp;
        for (int j = 0; j < n-1-i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                isSorted = 0;
            }
        }
        if (isSorted)
        {
            return;
        }
        
    }
}

void bubbleSort(int *arr,int size){
        
    for (int i = 0; i < size-1; i++)
    {
        int temp;
        for (int j = 0; j < size-1-i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int arr[] = {25,45,78,96,54,12,52};
    int n = 7;
    bubbleSort(arr,n);
    display(arr,n);

    return 0;
}