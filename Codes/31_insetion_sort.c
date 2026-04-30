#include<stdio.h>


void display(int *arr,int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
}
    
void insertionSort(int *arr,int n){
    
    
    for (int i = 1; i <= n-1; i++)
    {  int j = i-1;
        int key = arr[i];
        while (j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    
}


int main(){
    int arr[] = {25,45,78,96,32,14};
    int n = 6;

    insertionSort(arr,n);
    display(arr,n);
    
    return 0;
}