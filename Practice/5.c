#include<stdio.h>

void display(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
}

void deletion(int arr[],int size,int index){
    
    for (int i = index; i < size-1; i++)
    {
        arr[i] = arr[i+1]; 
    }
    
}



int main(){
    int arr[100] = {26,56,74,57};
    int size = 4;
    int element = 56;
    deletion(arr,size,2);
    size--;
    display(arr,size);
    return 0;
}