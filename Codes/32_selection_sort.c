#include<stdio.h>

void display(int *arr,int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
}

void selectionSort(int *arr, int n){
    int indexmin,temp;
    for (int i = 0; i < n-1; i++)
    { 
          indexmin = i;  
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[indexmin])
            {
                indexmin = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[indexmin];
        arr[indexmin] = temp;
        
    }
}

int main(){
      int arr[] = {25,78,45,96,52,14};
      int n = 6;

    //   display(arr,n);
      selectionSort(arr,n);
      display(arr,n);

    return 0;
}