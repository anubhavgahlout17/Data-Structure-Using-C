#include<stdio.h>

int linearSearch(int arr[],int size,int element){

    for (int i = 0; i < size; i++)
    {

        if (arr[i] == element)
        {
            return i;
        }
       
    }
    return -1;  // If element not found it return -1
    
}
int main(){
    int arr[] = {58,95,97,45,78,85,12,74,96};
    int size = sizeof(arr)/sizeof(int);
    
    int element = 96;
    int index = linearSearch(arr,size,element);
    printf("%d is found at Index %d",element,index);

    return 0;
}