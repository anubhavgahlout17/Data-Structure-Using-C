#include<stdio.h>

void display(int *arr,int n){       // merging two sorted array
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
}

void merge(int *arr1,int *arr2,int *arr3,int n,int m){
     int i = 0;
     int j = 0;
     int k = 0;
    while (i < n && j < m )
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            i++,k++;
        }
        else
        {
            arr3[k] =arr2[j];
            j++,k++;
        }
    }

    while (i < n)
    {
        arr3[k] = arr1[i];
        i++;k++;
    }
    while (j < m)
    {
        arr3[k] = arr2[j];
        j++,k++;
    }
}

int main(){

    int arr1[] = {25,45,85,96,118,774};
    int arr2[] = {1,10,15};
    int o = 6;
    int p = 3;
    int n = o+p;
    int arr3[n];


    merge(arr1,arr2,arr3,o,p);
    display(arr3,n);
    return 0;
}