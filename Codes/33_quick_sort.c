#include<stdio.h>

void display(int *arr,int n){       
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
 
int partition(int arr[],int low,int high){
     int pivot = arr[low];
     int i = low+1;
     int j = high;
     int temp;
     do{
     while (i <= high && arr[i] <= pivot)
     {
        i++; 
     }
     while (j >= low && arr[j] > pivot)
     {
        j--;
     }

     if (i < j)
     {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
     }
    
    }while(i < j);
     
        temp = arr[low];
        arr[low] = arr[j];
        arr[j] = temp;
     

    return j;
}

void quickSort(int arr[],int low,int high){
    int partitionIndex;
    if (low<high)
    {
    partitionIndex = partition(arr,low,high);
    display(arr,10);
    quickSort(arr,low,partitionIndex-1);
    quickSort(arr,partitionIndex+1,high);
    }
}

int main(){
   int arr[] = {45,12,78,3,56,23,89,1,67,34};
   int n = 10;
   int low = 0;
   int high = n-1;
   quickSort(arr,low,high);
   display(arr,n);

    return 0;
}