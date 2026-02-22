#include<stdio.h>

int binarySearch(int arr[],int size,int element){
    int low,mid,high;
    low = 0;
    high = size-1;
    

    while (low <= high)
    {
        mid = (low + high)/2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element )
        {
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {25,30,35,36,47,49,56,64,78,96,100,110,115,210,300,400};
    int size  = sizeof(arr)/sizeof(int);
    int element = 115;
    int Search = binarySearch(arr,size,element);
    printf("%d is Found at index at %d",element,Search);
    return 0;

}