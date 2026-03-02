#include<stdio.h>

int binarySearch(int arr[],int size,int element){          // For sorted Array : Binary Search 
    int low, mid, high;
    low = 0;
    high = size-1;
    while (low <= high)
    {
        mid = (low + high)/2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }
    }
    return -1;   // If element not found it return -1
    
}

int main(){

    int arr[] = {12,14,16,25,36,46,95,100,150,200,211,215,289,300,310,350,589};
    int size = sizeof(arr)/sizeof(int);
    int element = 16;
    int Search = binarySearch(arr,size,element);
    printf("%d is found at index %d",element,Search);
    return 0;

}