#include<stdio.h>

int binary_search(int arr[],int element,int size){
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
        if (arr[mid] < element)
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
    int arr[100] = {26,56,74,577};
    int size = 4;    
    int search = binary_search(arr,74,size);
    printf("index: %d",search);
    
    return 0;
}