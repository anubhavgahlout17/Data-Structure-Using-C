#include<stdio.h>


void display(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
}

void deletion(int arr[], int index,int size){
    for (int i = index; i < size-1; i++)
    {
           arr[index] = arr[i+1];
    }
    
}

int main(){
    int arr[50] = {25,45,85,96};
     int size = 4;
     deletion(arr,3,size);
     size--;
     display(arr,size);   
     
    return 0;
}