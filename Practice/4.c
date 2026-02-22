#include<stdio.h>

void display(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
}

void insertion(int arr[],int size,int index,int element){
    
    for (int i = size-1; i >= index; i--)
    {
        arr[i+1] = arr[i]; 
    }
    arr[index] = element;
}



int main(){
    int arr[100] = {26,56,74,57};
    int size = 4;
    int element = 50;
    insertion(arr,size,2,element);
    size++;
    display(arr,size);
    return 0;
}