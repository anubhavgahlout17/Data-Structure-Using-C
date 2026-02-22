#include<stdio.h>

void display(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }  
    printf("\n");
}

void deletion(int arr[],int index,int size){
    for (int i = index; i < size-1 ; i++)
    {
        arr[i] = arr[i+1];
    }
    
}

int main(){
    int arr[100] = {25,78,96,58,52};
    int size = 5;
    int capacity = 100;
    int index = 2;
    display(arr,size);
    deletion(arr,index,size);
    size--;
    display(arr,size);
    return 0;
}