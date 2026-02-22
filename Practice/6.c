#include<stdio.h>


 
int linearSearch(int arr[],int element,int size){

    for (int i = 0; i < size; i++)
    {
        if(arr[i] == element)

            return i;
    
    }
    return -1;
    
}





int main(){
    int arr[100] = {26,56,74,57,54,85,996,58,747,456,100};
    int size = sizeof(arr)/sizeof(int);
    int element = 996;
    int Search = linearSearch(arr,element,size);
    printf("%d is found at index %d",element,Search);
    
    return 0;
}