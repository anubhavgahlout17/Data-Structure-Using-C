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
    display(arr,9);
    quickSort(arr,low,partitionIndex-1);
    quickSort(arr,partitionIndex+1,high);
    }
}

int main(){
   int arr[] = {45,26,24,3,4,8,12,32,56};
   int n = 9;
   int low = 0;
   int high = n-1;
   quickSort(arr,low,high);
//    display(arr,n);

    return 0;
}