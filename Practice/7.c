#include<stdio.h>

void display(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
}

int linear_search(int arr[],int element,int size){
    
     for (int i = 0; i < size; i++)
     {
        if(arr[i] == element){
        return i;
        }
     }
     
    return -1;
}



int main(){
    int arr[100] = {26,56,74,57};
    int size = 4;    
    int search = linear_search(arr,74,size);
    printf("index: %d",search);
    
    return 0;
}